/* ControlDesk.java
 *
 *  Version:
 *  		$Id$
 * 
 *  Revisions:
 * 		$Log: ControlDesk.java,v $
 * 		Revision 1.13  2003/02/02 23:26:32  ???
 * 		ControlDesk now runs its own thread and polls for free lanes to assign queue members to
 * 		
 * 		Revision 1.12  2003/02/02 20:46:13  ???
 * 		Added " 's Party" to party names.
 * 		
 * 		Revision 1.11  2003/02/02 20:43:25  ???
 * 		misc cleanup
 * 		
 * 		Revision 1.10  2003/02/02 17:49:10  ???
 * 		Fixed problem in getPartyQueue that was returning the first element as every element.
 * 		
 * 		Revision 1.9  2003/02/02 17:39:48  ???
 * 		Added accessor for lanes.
 * 		
 * 		Revision 1.8  2003/02/02 16:53:59  ???
 * 		Updated comments to match javadoc format.
 * 		
 * 		Revision 1.7  2003/02/02 16:29:52  ???
 * 		Added ControlDeskEvent and ControlDeskObserver. Updated Queue to allow access to Vector so that contents could be viewed without destroying. Implemented observer model for most of ControlDesk.
 * 		
 * 		Revision 1.6  2003/02/02 06:09:39  ???
 * 		Updated many classes to support the ControlDeskView.
 * 		
 * 		Revision 1.5  2003/01/26 23:16:10  ???
 * 		Improved thread handeling in lane/controldesk
 * 		
 * 
 */

/**
 * Class that represents control desk
 *
 */

import org.json.simple.JSONObject;
import java.util.HashSet;
import java.util.Iterator;

class ControlDesk extends Thread {

	/** The collection of Lanes */
	private final HashSet<Lane> lanes;

	/** The party wait queue */

	/** The number of lanes represented */
	private final int numLanes;
	ControlDeskParty partyHandler;
	/** The collection of subscribers */
	DatabaseHandler mainDatabaseHandler;


	public ControlDesk(int numLanes, DatabaseHandler databaseHandler) {
		this.numLanes = numLanes;
		this.mainDatabaseHandler = databaseHandler;
		lanes = new HashSet<>(numLanes);
		partyHandler = ControlDeskParty.getInstance();

		for (int i = 0; i < numLanes; i++) {
			lanes.add(new Lane(mainDatabaseHandler));
		}


		this.start();
	}
	
	/**
	 * Main loop for ControlDesk's thread
	 * 
	 */
	public void run() {
		while (true) {
			
			assignLane();
			
			try {
				sleep(250);
			} catch (Exception ignored) {}
		}
	}
		
	public void assignLaneToSaved(JSONObject toRemove, Party currentParty, int[] curScores, int[][] cumulScores, int[][] finalScores, int gameNumber, int[][] scores, int frameNumber) {
		Iterator it = lanes.iterator();

		boolean got = false;

		while (it.hasNext()) {
			Lane curLane = (Lane) it.next();

			if (!curLane.isPartyAssigned()) {
				System.out.println("ok... assigning this party");
				curLane.assignSavedParty(currentParty, curScores, cumulScores, finalScores, gameNumber, scores, frameNumber);

				JsonConverter.removeSavedData(toRemove);
				got = true;
				break;
			}
		}

		if(!got) {
			new MessageDisplayView();
		}
		partyHandler.publish(new ControlDeskEvent(partyHandler.getPartyQueue()));
	}

	public void assignLane() {
		Iterator it = lanes.iterator();
		Queue partyQueue = partyHandler.getQueue();
		while (it.hasNext() && partyQueue.hasMoreElements()) {
			Lane curLane = (Lane) it.next();

			if (!curLane.isPartyAssigned()) {
				System.out.println("ok... assigning this party");
				curLane.assignParty(((Party) partyQueue.next()));
			}
		}
		partyHandler.publish(new ControlDeskEvent(partyHandler.getPartyQueue()));
	}


	public int getNumLanes() {
		return numLanes;
	}


	public HashSet<Lane> getLanes() {
		return (HashSet<Lane>) lanes.clone();
	}
}
