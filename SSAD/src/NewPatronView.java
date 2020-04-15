/* AddPartyView.java
 *
 *  Version
 *  $Id$
 * 
 *  Revisions:
 * 		$Log: NewPatronView.java,v $
 * 		Revision 1.3  2003/02/02 16:29:52  ???
 * 		Added ControlDeskEvent and ControlDeskObserver. Updated Queue to allow access to Vector so that contents could be viewed without destroying. Implemented observer model for most of ControlDesk.
 * 		
 * 
 */

/**
 * Class for GUI components need to add a patron
 *
 */

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.*;

public class NewPatronView implements ActionListener {

	public JFrame win;
	private ButtonPanel buttonPanel;
	private String nick, full, email;

	private boolean done = false;
	private TextPanel patronPanel;
	private final AddPartyView addParty;

	private Panel buildPanels() {
		// Patron Panel
		patronPanel = new TextPanel("Your Info", 3, 1);
		patronPanel.add("Nick Name", 15);
		patronPanel.add("Full Name", 15);
		patronPanel.add("E-Mail", 15);

//		Insets buttonMargin = new Insets(4, 4, 4, 4);

		buttonPanel = new ButtonPanel("", 4, 1);
		buttonPanel.add("Add Patron", this, true);
		buttonPanel.add("Abort", this, true);

		// Clean up main panel
		Panel colPanel = new Panel("");
		colPanel.addPanel(patronPanel.getPanel(), "Center");
		colPanel.addPanel(buttonPanel.getPanel(), "East");

		return colPanel;
	}

	public NewPatronView(AddPartyView v) {

		addParty = v;
//		done = false;

		win = new JFrame("Add Patron");
		win.getContentPane().setLayout(new BorderLayout());
		((JPanel) win.getContentPane()).setOpaque(false);

		Panel colPanel = buildPanels();

		win.getContentPane().add("Center", colPanel.getJPanel());

		win.pack();

		// Center Window on Screen
		Dimension screenSize = (Toolkit.getDefaultToolkit()).getScreenSize();
		WinLocation window = new WinLocation();
		window.setCentre(win, screenSize);

	}

	public void actionPerformed(ActionEvent e) {
		Object source = e.getSource();

		if (source.equals(buttonPanel.get("Abort"))) {
			done = true;
			win.setVisible(false);
		}

		if (source.equals(buttonPanel.get("Add Patron"))) {
			nick = patronPanel.getText("Nick Name");
			full = patronPanel.getText("Full Name");
			email = patronPanel.getText("E-Mail");
			done = true;
			addParty.updateNewPatron(this);
			win.setVisible(false);
		}
	}

	public boolean done() {
		return done;
	}

	public String getNick() {
		return nick;
	}

	public String getFull() {
		return full;
	}

	public String getEmail() {
		return email;
	}

}
