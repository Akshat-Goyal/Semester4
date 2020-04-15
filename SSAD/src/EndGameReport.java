/**
 *
 * To change this generated comment edit the template variable "typecomment":
 * Window>Preferences>Java>Templates.
 * To enable and disable the creation of type comments go to
 * Window>Preferences>Java>Code Generation.
 */

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

import java.util.*;

public class EndGameReport implements ActionListener, ListSelectionListener {

	public JFrame win;
	private ButtonPanel buttonPanel;
	private final Vector<String> retVal = new Vector<>();

	private int result = 0;
	private String selectedMember;

	private ScrollPanel<String> buildPanels(Party party) {
		// Member Panel
		Vector<String> myVector = new Vector<>();
		Iterator iter = (party.getMembers()).iterator();
		while(iter.hasNext()) {
			myVector.add(((Bowler)iter.next()).getNickName());
		}

		ScrollPanel<String> partyPanel = new ScrollPanel<>("Party Members", myVector, 120, 5, false, this);
		partyPanel.getPanel().add(partyPanel.getList());

		// Button Panel
//		Insets buttonMargin = new Insets(4, 4, 4, 4);

		buttonPanel = new ButtonPanel("", 2, 1);
		buttonPanel.add("Print Report", this, true);
		buttonPanel.add("Finished", this, true);

		return partyPanel;
	}

	public EndGameReport( String partyName, Party party ) {
	
//		result = 0;
//		retVal = new Vector<>();
		win = new JFrame("End Game Report for " + partyName + "?" );
		win.getContentPane().setLayout(new BorderLayout());
		((JPanel) win.getContentPane()).setOpaque(false);

		ScrollPanel<String> partyPanel = buildPanels(party);

		Panel colPanel = new Panel("", 1, 2);

		// Clean up main panel
		colPanel.addPanel(partyPanel.getPanel());
		colPanel.addPanel(buttonPanel.getPanel());

		win.getContentPane().add("Center", colPanel.getJPanel());

		win.pack();

		// Center Window on Screen
		Dimension screenSize = (Toolkit.getDefaultToolkit()).getScreenSize();
		WinLocation window = new WinLocation();
		window.setCentre(win, screenSize);
	}

	public void actionPerformed(ActionEvent e) {
		Object source = e.getSource();

		if (source.equals(buttonPanel.get("Print Report"))) {
			//Add selected to the vector.
			retVal.add(selectedMember);
		}
		if (source.equals(buttonPanel.get("Finished"))) {
			win.setVisible(false);
			result = 1;
		}
	}

	public void valueChanged(ListSelectionEvent e) {
		selectedMember =
			((String) ((JList) e.getSource()).getSelectedValue());
	}


	public Vector<String> getResult() {
		while (result == 0) {
			try {
				Thread.sleep(10);
			} catch (InterruptedException e) {
				System.err.println("Interrupted");
			}
		}
		return (Vector<String>) retVal.clone();
	}
	
	public void destroy() {
		win.setVisible(false);
	}

}

