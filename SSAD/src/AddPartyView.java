/* AddPartyView.java
 *
 *  Version:
 * 		 $Id$
 *
 *  Revisions:
 * 		$Log: AddPartyView.java,v $
 * 		Revision 1.7  2003/02/20 02:05:53  ???
 * 		Fixed addPatron so that duplicates won't be created.
 *
 * 		Revision 1.6  2003/02/09 20:52:46  ???
 * 		Added comments.
 *
 * 		Revision 1.5  2003/02/02 17:42:09  ???
 * 		Made updates to migrate to observer model.
 *
 * 		Revision 1.4  2003/02/02 16:29:52  ???
 * 		Added ControlDeskEvent and ControlDeskObserver. Updated Queue to allow access to Vector so that contents could be viewed without destroying. Implemented observer model for most of ControlDesk.
 *
 *
 */

/**
 * Class for GUI components need to add a party
 *
 */

import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Vector;

/**
 * Constructor for GUI used to Add Parties to the waiting party queue.
 *
 */

public class AddPartyView implements ActionListener, ListSelectionListener {

	private final int maxSize;

	public  JFrame win;
	private ButtonPanel buttonPanel;
	private ScrollPanel<String> partyPanel;
	private ScrollPanel<Object> bowlerPanel;
	private final Vector<String> party;
	private Vector<Object> bowlerdb;

	private final ControlDeskView controlDesk;
	private String selectedNick, selectedMember;

	public AddPartyView(ControlDeskView controlDesk, int max) {

		this.controlDesk = controlDesk;
		maxSize = max;

		win = new JFrame("Add Party");
		win.getContentPane().setLayout(new BorderLayout());
		((JPanel) win.getContentPane()).setOpaque(false);

		party = new Vector<>();

		Vector<String> empty = new Vector<>();
		empty.add("(Empty)");

		partyPanel = new ScrollPanel<>("Your Party", empty, 120, 5, false, this);

		try {
			bowlerdb = new Vector<Object>(BowlerFile.getBowlers());
		} catch (Exception e) {
			System.err.println("File Error");
			bowlerdb = new Vector<>();
		}

		bowlerPanel = new ScrollPanel<>("Bowler Database", bowlerdb, 120, 8, true, this);

//		Insets buttonMargin = new Insets(4, 4, 4, 4);

		buttonPanel = new ButtonPanel("", 4, 1);
		buttonPanel.add("Add to Party", this, true);
		buttonPanel.add("Remove Member", this, true);
		buttonPanel.add("New Patron", this, true);
		buttonPanel.add("Finished", this, true);

		Panel colPanel = new Panel("", 1, 3);
		colPanel.addPanel(partyPanel.getPanel());
		colPanel.addPanel(bowlerPanel.getPanel());
		colPanel.addPanel(buttonPanel.getPanel());

		win.getContentPane().add("Center", colPanel.getJPanel());
		win.pack();

		// Center Window on Screen
		Dimension screenSize = (Toolkit.getDefaultToolkit()).getScreenSize();
		WinLocation window = new WinLocation();
		window.setCentre(win, screenSize);
	}

	public void actionPerformed(ActionEvent e) {
		final Object source = e.getSource();

		if (source.equals(buttonPanel.get("Add to Party"))) {
			if (selectedNick != null && party.size() < maxSize) {
				if (party.contains(selectedNick)) {
					System.err.println("Member already in Party");
				} else {
					party.add(selectedNick);
					partyPanel.setListData(party);
				}
			}
		}

		if (source.equals(buttonPanel.get("Remove Member"))) {
			if (selectedMember != null) {
				party.removeElement(selectedMember);
				partyPanel.setListData(party);
			}
		}

		if(source.equals(buttonPanel.get("New Patron"))) {
			NewPatronView newPatron = new NewPatronView(this);
		}

		if (source.equals(buttonPanel.get("Finished"))) {
			if (party != null && party.size() > 0) {
				controlDesk.updateAddParty(this);
			}
			win.setVisible(false);
		}
	}

	/**
	 * Handler for List actions
	 * @param e the ListActionEvent that triggered the handler
	 */

	public void valueChanged(ListSelectionEvent e) {
		final Object source = e.getSource();

		if (source.equals(bowlerPanel.getList())) {
			selectedNick =
					((String) ((JList) source).getSelectedValue());
		}
		if (source.equals(partyPanel.getList())) {
			selectedMember =
					((String) ((JList) source).getSelectedValue());
		}
	}

	/**
	 * Called by NewPatronView to notify AddPartyView to update
	 *
	 * @param newPatron the NewPatronView that called this method
	 */

	public void updateNewPatron(NewPatronView newPatron) {
		try {
			Bowler checkBowler = BowlerFile.getBowlerInfo(newPatron.getNick());
			if (checkBowler == null) {
				final String nickName = newPatron.getNick();
				BowlerFile.putBowlerInfo(
						nickName,
						newPatron.getFull(),
						newPatron.getEmail());
				bowlerdb = new Vector<Object>(BowlerFile.getBowlers());
				bowlerPanel.setListData(bowlerdb);
				party.add(nickName);
				partyPanel.setListData(party);
			}

			else {
				System.err.println("A Bowler with that name already exists.");
			}
		}

		catch (Exception e2) {
			System.err.println("File I/O Error");
		}
	}

	/**
	 * Accessor for Party
	 */

	public Vector<String> getParty() {
		return (Vector<String>) party.clone();
	}

}
