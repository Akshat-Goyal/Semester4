/*
 * PinSetterView/.java
 *
 * Version:
 *   $Id$
 *
 * Revision:
 *   $Log$
 */

/**
 *  constructs a prototype PinSetter GUI
 *
 */

import java.awt.*;
import javax.swing.*;
import java.util.Vector;


public class PinSetterView implements PinsetterObserver {


	private final Vector<JLabel> pinVect = new Vector<>();
	private final JPanel secondRoll;

	/**
	 * Constructs a Pin Setter GUI displaying which roll it is with
	 * yellow boxes along the top (1 box for first roll, 2 boxes for second)
	 * and displays the pins as numbers in this format:
	 *
	 *                7   8   9   10
	 *                  4   5   6
	 *                    2   3
	 *                      1
	 *
	 */


	private final JFrame frame;

	public PinSetterView ( int laneNum ) {

		frame = new JFrame ( "Lane " + laneNum + ":" );

		Container contentPane = frame.getContentPane ( );


		JPanel top = new JPanel();

		JPanel firstRoll = new JPanel();
		firstRoll.setBackground(Color.yellow);

		secondRoll = new JPanel();
		secondRoll.setBackground(Color.black);

		top.add (firstRoll, BorderLayout.WEST );
		top.add (secondRoll, BorderLayout.EAST );

		top.setBackground ( Color.black );
		contentPane.add ( top, BorderLayout.NORTH );

		JPanel pins = addPins();
		contentPane.add ( pins, BorderLayout.CENTER );

		frame.pack();

//		frame.show();
	}

	private JPanel[] getPanelsAndLabels() {
		JPanel[] panels = new JPanel[11];

		for(int i = 1; i < 11; i++) {
			JPanel currentPanel = new JPanel();

			JLabel currentLabel = new JLabel(Integer.toString(i));
			pinVect.add(currentLabel);

			currentPanel.add(currentLabel);
			panels[i] = currentPanel;
		}

		return panels;
	}

	private void addPanels(int howMany, JPanel pins) {
		for(int i = 0; i < howMany; i++) {
			pins.add(new JPanel());
		}
	}

	private void createSetting(JPanel[] panels, JPanel pins) {
		for(int i = 7; i < 10; i++) {
			pins.add(panels[i]);
			addPanels(1, pins);
		}
		pins.add(panels[10]);

		for(int i = 4; i < 7; i++) {
			addPanels(1, pins);
			pins.add(panels[i]);
		}

		addPanels(3, pins);
		pins.add(panels[2]);
		addPanels(1, pins);
		pins.add(panels[3]);
		addPanels(2, pins);

		addPanels(3, pins);
		pins.add(panels[1]);
		addPanels(3, pins);
	}

	JPanel addPins() {
		JPanel pins = new JPanel();
		pins.setLayout (new GridLayout(4, 7));

		JPanel[] panels = getPanelsAndLabels();
		createSetting(panels, pins);

		pins.setBackground(Color.black);
		pins.setForeground(Color.yellow);

		return pins;
	}


	/**
	 * This method receives a pinsetter event.  The event is the current
	 * state of the PinSetter and the method changes how the GUI looks
	 * accordingly.  When pins are "knocked down" the corresponding label
	 * is grayed out.  When it is the second roll, it is indicated by the
	 * appearance of a second yellow box at the top.
	 *
	 * @param pe    The state of the pinsetter is sent in this event.
	 */
	private void updatePinView(PinsetterEvent pe){
		JLabel tempPin = new JLabel ( );
		for ( int c = 0; c < 10; c++ ) {
			boolean pin = pe.pinKnockedDown ( c );
			tempPin = pinVect.get ( c );
			if ( pin ) {
				tempPin.setForeground ( Color.lightGray );
			}
		}
	}

	private void checkSecondThrow(PinsetterEvent pe){
		if ( pe.getThrowNumber() == 1 ) {
			secondRoll.setBackground ( Color.yellow );
		}
	}
	private void checkReset(){
		for ( int i = 0; i != 10; i++){
			pinVect.get(i).setForeground(Color.black);
		}
		secondRoll.setBackground( Color.black);
	}
	public void receivePinsetterEvent(PinsetterEvent pe){
		if ( !(pe.isFoulCommitted()) ) {
			updatePinView(pe);
		}
		checkSecondThrow(pe);
		if ( pe.pinsDownOnThisThrow() == -1) {
			checkReset();
		}
	}

	public void show() {
		frame.setVisible(true);
	}

	public void hide() {
		frame.setVisible(false);
	}

	public static void main (String[] args) {
		PinSetterView pg = new PinSetterView ( 1 );
	}

}