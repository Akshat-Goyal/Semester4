/* ControlDeskView.java
 *
 *  Version:
 *			$Id$
 * 
 *  Revisions:
 * 		$Log$
 * 
 */

/**
 * Class for representation of the control desk
 *
 */

import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.simple.parser.ParseException;

import javax.swing.*;
import javax.swing.border.TitledBorder;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Vector;

public class ControlDeskView implements ActionListener, ControlDeskObserver {

	public JFrame win;
	private ScrollPanel<Object> partyPanel;
	private ButtonPanel controlsPanel;
	/** The maximum  number of members in a party */
	private final int maxMembers;
	
	private final ControlDesk controlDesk;
	ControlDeskParty partyHandler;

	private String getLaneName(int laneCount) {
		return ("Lane " + laneCount);
	}

	private JPanel buildPanels(int numLanes) {
		// Controls Panel
		controlsPanel = new ButtonPanel("Controls", 4, 1);
		controlsPanel.add("Add Party", this, true);
		controlsPanel.add("Load Existing Game", this, true);
		controlsPanel.add("Queries", this, true);
		controlsPanel.add("Finished", this, true);

		// Lane Status Panel
		JPanel laneStatusPanel = new JPanel();
		laneStatusPanel.setLayout(new GridLayout(numLanes, 1));
		laneStatusPanel.setBorder(new TitledBorder("Lane Status"));

		HashSet<Lane> lanes = controlDesk.getLanes();
		Iterator it = lanes.iterator();
		int laneCount = 0;
		while (it.hasNext()) {
			Lane curLane = (Lane) it.next();
			LaneStatusView laneStat = new LaneStatusView(curLane, laneCount + 1);
			curLane.subscribe(laneStat);
			curLane.getPinsetter().subscribe(laneStat);
			JPanel lanePanel = laneStat.panel.getJPanel();
			laneCount++;

			lanePanel.setBorder(new TitledBorder(getLaneName(laneCount)));
			laneStatusPanel.add(lanePanel);
		}

		Vector <String> empty = new Vector<>();
		empty.add("(Empty)");

		partyPanel = new ScrollPanel<>("Party Queue", empty, 120, 10, true);

		return laneStatusPanel;
	}

	public ControlDeskView(ControlDesk controlDesk, int maxMembers) {

		this.controlDesk = controlDesk;
		this.maxMembers = maxMembers;
		int numLanes = controlDesk.getNumLanes();
		partyHandler = ControlDeskParty.getInstance();
		win = new JFrame("Control Desk");
		win.getContentPane().setLayout(new BorderLayout());
		((JPanel) win.getContentPane()).setOpaque(false);

		JPanel colPanel = new JPanel();
		colPanel.setLayout(new BorderLayout());

		JPanel laneStatusPanel = buildPanels(numLanes);

		// Clean up main panel
		colPanel.add(controlsPanel.getPanel(), "East");
		colPanel.add(laneStatusPanel, "Center");
		colPanel.add(partyPanel.getPanel(), "West");

		win.getContentPane().add("Center", colPanel);

		win.pack();

		/* Close program when this window closes */
		win.addWindowListener(new WindowAdapter() {
			public void windowClosing(WindowEvent e) {
				System.exit(0);
			}
		});

		// Center Window on Screen
		Dimension screenSize = (Toolkit.getDefaultToolkit()).getScreenSize();
		WinLocation window = new WinLocation();
		window.setCentre(win,screenSize);
	}


	public void actionPerformed(ActionEvent e) {
		Object source = e.getSource();

		if (source.equals(controlsPanel.get("Add Party"))) {
			AddPartyView addPartyWin = new AddPartyView(this, maxMembers);
		}
		else if (source.equals(controlsPanel.get("Finished"))) {
			win.setVisible(false);
			System.exit(0);
		}
		else if (source.equals(controlsPanel.get("Queries"))) {
			QueriesView queriesView = new QueriesView();
		}
		else if(source.equals(controlsPanel.get("Load Existing Game"))) {
			JSONArray gameDataArray = JsonConverter.loadData();

			Vector <String> partyList = new Vector<>();

			for(Object obj: gameDataArray) {
				JSONObject object = (JSONObject)obj;
				String currentParty = object.get("Party").toString();
				partyList.add(currentParty);
			}

			new LoadExistingGameView(this, partyList);
		}
	}

	/**
	 * Receive a new party from andPartyView.
	 *
	 * @param addPartyView	the AddPartyView that is providing a new party
	 *
	 */

	public void updateAddParty(AddPartyView addPartyView) {
		partyHandler.addPartyQueue(addPartyView.getParty());
	}

	/**
	 * Receive a broadcast from a ControlDesk
	 *
	 * @param ce	the ControlDeskEvent that triggered the handler
	 *
	 */

	public void receiveControlDeskEvent(ControlDeskEvent ce) {
		partyPanel.setListData(ce.getPartyQueue());
	}

	public ControlDesk getControlDesk() {
		return this.controlDesk;
	}
}
