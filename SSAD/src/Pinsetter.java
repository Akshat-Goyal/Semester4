/*
 * Pinsetter.java
 *
 * Version:
 *   $Id$
 *
 * Revisions:
 *   $Log: Pinsetter.java,v $
 *   Revision 1.21  2003/02/20 20:27:45  ???
 *   Fouls disables.
 *
 *   Revision 1.20  2003/02/20 19:53:52  ???
 *   Added foul support.  Still need to update laneview and test this.
 *
 *   Revision 1.19  2003/02/06 22:28:51  ???
 *   added delay
 *
 *   Revision 1.18  2003/02/06 00:27:46  ???
 *   Fixed a race condition
 *
 *   Revision 1.17  2003/02/05 23:56:07  ???
 *   *** empty log message ***
 *
 *   Revision 1.16  2003/02/05 23:51:09  ???
 *   Better random numbers.
 *
 *   Revision 1.15  2003/02/02 23:49:48  ???
 *   Pinsetter generates an event when all pins are reset
 *
 *   Revision 1.14  2003/02/02 23:26:32  ???
 *   ControlDesk now runs its own thread and polls for free lanes to assign queue members to
 *
 *   Revision 1.13  2003/02/02 23:21:30  ???
 *   pinsetter should give better results
 *
 *   Revision 1.12  2003/02/02 23:20:28  ???
 *   pinsetter should give better results
 *
 *   Revision 1.11  2003/02/02 23:11:41  ???
 *   parties can now play more than 1 game on a lane, and lanes are properly released after games
 *
 *   Revision 1.10  2003/02/01 19:14:42  ???
 *   Will now set the pins back up at times other than the 10th frame.
 *
 *   Revision 1.9  2003/01/30 21:44:25  ???
 *   Fixed speling of received in may places.
 *
 *   Revision 1.8  2003/01/26 22:34:44  ???
 *   Total rewrite of lane and pinsetter for R2's observer model
 *   Added Lane/Pinsetter Observer
 *   Rewrite of scoring algorythm in lane
 *
 *   Revision 1.7  2003/01/19 21:55:24  ???
 *   updated pinsetter to new spec
 *
 *   Revision 1.6  2003/01/16 04:59:59  ???
 *   misc fixes across the board
 *
 *   Revision 1.5  2003/01/13 22:35:21  ???
 *   Scoring works.
 *
 *   Revision 1.3  2003/01/12 22:37:20  ???
 *   Wrote a better algorythm for knocking down pins
 *
 *
 */

/**
 * Class to represent the pinsetter
 *
 */

import java.util.*;

public class Pinsetter {

	private final Random rnd;
	private final Vector<PinsetterObserver> subscribers;

	private final boolean[] pins;
			/* 0-9 of state of pine, true for standing, 
			false for knocked down

			6   7   8   9
			  3   4   5
			    2   1
			      0

			*/
	private boolean foul;
	private int throwNumber;

	/** sendEvent()
	 * 
	 * Sends pinsetter events to all subscribers
	 * 
	 * @pre none
	 * @post all subscribers have recieved pinsetter event with updated state
	 * */
	private void sendEvent(int jdpins) {	// send events when our state is changed
		for (Object subscriber : subscribers) {
			((PinsetterObserver) subscriber).receivePinsetterEvent(
					new PinsetterEvent(pins, foul, throwNumber, jdpins));
		}
	}

	/** Pinsetter()
	 * 
	 * Constructs a new pinsetter
	 * 
	 * @pre none
	 * @post a new pinsetter is created
	 * @return Pinsetter object
	 */
	public Pinsetter() {
		pins = new boolean[10];
		rnd = new Random();
		subscribers = new Vector<>();
		foul = false;
		reset();
	}

	/** ballThrown()
	 * 
	 * Called to simulate a ball thrown comming in contact with the pinsetter
	 * 
	 * @pre none
	 * @post pins may have been knocked down and the thrownumber has been incremented
	 */
	public void ballThrown() {	// simulated event of ball hits sensor
		int count = 0;
		foul = false;
		double skill = rnd.nextDouble();
		for (int i=0; i <= 9; i++) {
			if (pins[i]) {
				double pinluck = rnd.nextDouble();
				if (pinluck <= .04){ 
					foul = true;
				}
				if ( ((skill + pinluck)/2.0 * 1.2) > .5 ){
					pins[i] = false;
				} 
				if (!pins[i]) {		// this pin just knocked down
					count++;
				}
			}
		}

		try {
			Thread.sleep(500);				// pinsetter is where delay will be in a real game
		} catch (Exception ignored) {}

		sendEvent(count);

		throwNumber++;
	}

	/** reset()
	 * 
	 * Reset the pinsetter to its complete state
	 * 
	 * @pre none
	 * @post pinsetters state is reset
	 */
	public void reset() {
		foul = false;
		throwNumber = 1;
		resetPins();
		
		try {
			Thread.sleep(1000);
		} catch (Exception ignored) {}
		
		sendEvent(-1);
	}

	/** resetPins()
	 * 
	 * Reset the pins on the pinsetter
	 * 
	 * @pre none
	 * @post pins array is reset to all pins up
	 */
	public void resetPins() {
		for (int i=0; i <= 9; i++) {
			pins[i] = true;
		}
	}		

	/** subscribe()
	 * 
	 * subscribe objects to send events to
	 * 
	 * @pre none
	 * @post the subscriber object will recieve events when their generated
	 */
	public void subscribe(PinsetterObserver subscriber) {
		subscribers.add(subscriber);
	}

}

