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

public class EndGamePrompt implements ActionListener {

	public JFrame win;
	private ButtonPanel buttonPanel;

	private int result;

	private String selectedNick, selectedMember;


	private Panel buildPanels(String partyName) {
		// Label Panel
		Panel labelPanel = new Panel("");
		labelPanel.addJLabel("Party " + partyName + " has finished bowling.\nWould they like to bowl another game?");

		Insets buttonMargin = new Insets(4, 4, 4, 4);

		buttonPanel = new ButtonPanel("", 1, 2);
		buttonPanel.add("Yes", this, true);
		buttonPanel.add("No", this, true);

		Panel colPanel = new Panel("", 2, 1);
		colPanel.addPanel(labelPanel.getJPanel());
		colPanel.addPanel(buttonPanel.getJPanel());

		return colPanel;
	}

	public EndGamePrompt( String partyName ) {

		result = 0;
		
		win = new JFrame("Another Game for " + partyName + "?" );
		win.getContentPane().setLayout(new BorderLayout());
		((JPanel) win.getContentPane()).setOpaque(false);

		Panel colPanel = buildPanels(partyName);

		win.getContentPane().add("Center", colPanel.getJPanel());

		win.pack();

		// Center Window on Screen
		Dimension screenSize = (Toolkit.getDefaultToolkit()).getScreenSize();
		WinLocation window = new WinLocation();
		window.setCentre(win, screenSize);
	}

	public void actionPerformed(ActionEvent e) {
		final Object source = e.getSource();

		if (source.equals(buttonPanel.get("Yes"))) {
			result = 1;
		}
		if (source.equals(buttonPanel.get("No"))) {
			result = 2;
		}
	}

	public int getResult() {
		while (result == 0) {
			try {
				Thread.sleep(10);
			}
			catch (InterruptedException e) {
				System.err.println("Interrupted");
			}
		}
		destroy();
		return result;
	}
	
	public void destroy() {
		win.setVisible(false);
	}
	
}

