/*  $Id$
 *
 *  Revisions:
 *    $Log: PinsetterEvent.java,v $
 *    Revision 1.2  2003/01/26 22:34:44  ???
 *    Total rewrite of lane and pinsetter for R2's observer model
 *    Added Lane/Pinsetter Observer
 *    Rewrite of scoring algorythm in lane
 *
 *    Revision 1.1  2003/01/19 21:04:24  ???
 *    created pinsetterevent and pinsetterobserver
 *
 */

public class PinsetterEvent {


	private final boolean[] pinsStillStanding;
	private final boolean foulCommitted;
	private final int throwNumber;
	private final int pinsDownThisThrow;

	/** PinsetterEvent()
	 * 
	 * creates a new pinsetter event
	 * 
	 * @pre none
	 * @post the object has been initialized
	 */
	public PinsetterEvent(boolean[] ps, boolean foul, int tn, int pinsDownThisThrow) {
		pinsStillStanding = new boolean[10];

		System.arraycopy(ps, 0, pinsStillStanding, 0, 10);
		
		foulCommitted = foul;
		throwNumber = tn;
		this.pinsDownThisThrow = pinsDownThisThrow;
	}

	/** pinKnockedDown()
	 * 
	 * check if a pin has been knocked down
	 * 
	 * @return true if pin [i] has been knocked down
	 */
	public boolean pinKnockedDown(int i) {
		return !pinsStillStanding[i];
	}
	
	/** pinsDownOnThisThrow()
	 * 
	 * @return the number of pins knocked down assosicated with this event
	 */
	public int pinsDownOnThisThrow() {
		return pinsDownThisThrow;
	}
	
	/** totalPinsDown()
	 * 
	 * @return the total number of pins down for pinsetter that generated the event
	 */
	public int totalPinsDown() {
		int count = 0;
		
		for (int i=0; i <= 9; i++) {
			if (pinKnockedDown(i)) {
				count++;
			}
		}
		
		return count;
	}
	
	/** isFoulCommitted()
	 * 
	 * @return true if a foul was commited on the lane, false otherwise
	 */
	public boolean isFoulCommitted() {
		return foulCommitted;
	}

	/** getThrowNumber()
	 *
	 * @return current number of throws taken on this lane after last reset
	 */
	public int getThrowNumber() {
		return throwNumber;
	}
}

