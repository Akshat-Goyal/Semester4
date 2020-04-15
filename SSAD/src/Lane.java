
/* $Id$
 *
 * Revisions:
 *   $Log: Lane.java,v $
 *   Revision 1.52  2003/02/20 20:27:45  ???
 *   Fouls disables.
 *
 *   Revision 1.51  2003/02/20 20:01:32  ???
 *   Added things.
 *
 *   Revision 1.50  2003/02/20 19:53:52  ???
 *   Added foul support.  Still need to update laneview and test this.
 *
 *   Revision 1.49  2003/02/20 11:18:22  ???
 *   Works beautifully.
 *
 *   Revision 1.48  2003/02/20 04:10:58  ???
 *   Score reporting code should be good.
 *
 *   Revision 1.47  2003/02/17 00:25:28  ???
 *   Added disbale controls for View objects.
 *
 *   Revision 1.46  2003/02/17 00:20:47  ???
 *   fix for event when game ends
 *
 *   Revision 1.43  2003/02/17 00:09:42  ???
 *   fix for event when game ends
 *
 *   Revision 1.42  2003/02/17 00:03:34  ???
 *   Bug fixed
 *
 *   Revision 1.41  2003/02/16 23:59:49  ???
 *   Reporting of sorts.
 *
 *   Revision 1.40  2003/02/16 23:44:33  ???
 *   added mechnanical problem flag
 *
 *   Revision 1.39  2003/02/16 23:43:08  ???
 *   added mechnanical problem flag
 *
 *   Revision 1.38  2003/02/16 23:41:05  ???
 *   added mechnanical problem flag
 *
 *   Revision 1.37  2003/02/16 23:00:26  ???
 *   added mechnanical problem flag
 *
 *   Revision 1.36  2003/02/16 21:31:04  ???
 *   Score logging.
 *
 *   Revision 1.35  2003/02/09 21:38:00  ???
 *   Added lots of comments
 *
 *   Revision 1.34  2003/02/06 00:27:46  ???
 *   Fixed a race condition
 *
 *   Revision 1.33  2003/02/05 11:16:34  ???
 *   Boom-Shacka-Lacka!!!
 *
 *   Revision 1.32  2003/02/05 01:15:19  ???
 *   Real close now.  Honest.
 *
 *   Revision 1.31  2003/02/04 22:02:04  ???
 *   Still not quite working...
 *
 *   Revision 1.30  2003/02/04 13:33:04  ???
 *   Lane may very well work now.
 *
 *   Revision 1.29  2003/02/02 23:57:27  ???
 *   fix on pinsetter hack
 *
 *   Revision 1.28  2003/02/02 23:49:48  ???
 *   Pinsetter generates an event when all pins are reset
 *
 *   Revision 1.27  2003/02/02 23:26:32  ???
 *   ControlDesk now runs its own thread and polls for free lanes to assign queue members to
 *
 *   Revision 1.26  2003/02/02 23:11:42  ???
 *   parties can now play more than 1 game on a lane, and lanes are properly released after games
 *
 *   Revision 1.25  2003/02/02 22:52:19  ???
 *   Lane compiles
 *
 *   Revision 1.24  2003/02/02 22:50:10  ???
 *   Lane compiles
 *
 *   Revision 1.23  2003/02/02 22:47:34  ???
 *   More observering.
 *
 *   Revision 1.22  2003/02/02 22:15:40  ???
 *   Add accessor for pinsetter.
 *
 *   Revision 1.21  2003/02/02 21:59:20  ???
 *   added conditions for the party choosing to play another game
 *
 *   Revision 1.20  2003/02/02 21:51:54  ???
 *   LaneEvent may very well be observer method.
 *
 *   Revision 1.19  2003/02/02 20:28:59  ???
 *   fixed sleep thread bug in lane
 *
 *   Revision 1.18  2003/02/02 18:18:51  ???
 *   more changes. just need to fix scoring.
 *
 *   Revision 1.17  2003/02/02 17:47:02  ???
 *   Things are pretty close to working now...
 *
 *   Revision 1.16  2003/01/30 22:09:32  ???
 *   Worked on scoring.
 *
 *   Revision 1.15  2003/01/30 21:45:08  ???
 *   Fixed speling of received in Lane.
 *
 *   Revision 1.14  2003/01/30 21:29:30  ???
 *   Fixed some MVC stuff
 *
 *   Revision 1.13  2003/01/30 03:45:26  ???
 *   *** empty log message ***
 *
 *   Revision 1.12  2003/01/26 23:16:10  ???
 *   Improved thread handeling in lane/controldesk
 *
 *   Revision 1.11  2003/01/26 22:34:44  ???
 *   Total rewrite of lane and pinsetter for R2's observer model
 *   Added Lane/Pinsetter Observer
 *   Rewrite of scoring algorythm in lane
 *
 *   Revision 1.10  2003/01/26 20:44:05  ???
 *   small changes
 *
 * 
 */

import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Vector;

public class Lane extends Thread implements  PinsetterObserver{

	private Party party;
	private Pinsetter setter;
	private HashMap scores;
	private Vector subscribers;

	public boolean gameIsHalted;
	public boolean gameIsPaused;
	private boolean partyAssigned;
	private boolean gameFinished;
	private Iterator bowlerIterator;
	private int ball;
	private int bowlIndex;
	private int frameNumber;
	private boolean tenthFrameStrike;

	private int[] curScores;
	private int[][] cumulScores;
	private boolean canThrowAgain;

	private int[][] finalScores;
	private int gameNumber;
	//	LaneScoreHandler laneScoreHandler;
	private Bowler currentThrower;
	private DatabaseHandler databaseHandler;

	/** Lane()
	 *
	 * Constructs a new lane and starts its thread
	 *
	 * @pre none
	 * @post a new lane has been created and its thread is executing
	 */
	public Lane(DatabaseHandler mainDatabaseHandler) {
		setter = new Pinsetter();
		scores = new HashMap();
		subscribers = new Vector();

		gameIsHalted = false;
		gameIsPaused = false;
		partyAssigned = false;

		gameNumber = 0;

		setter.subscribe( this );

		this.databaseHandler = mainDatabaseHandler;

		this.start();
	}

	private void checkIfPaused() {
		while (gameIsHalted || gameIsPaused) {
			try {
				sleep(10);
			} catch (Exception ignored) {}
		}
	}

	private void gameIsRunning() {
		if (bowlerIterator.hasNext()) {
			currentThrower = (Bowler)bowlerIterator.next();

			canThrowAgain = true;
			tenthFrameStrike = false;
			ball = 0;
//					System.out.println("EVERYTHING IS FINE");
			while (canThrowAgain) {
				setter.ballThrown();		// simulate the thrower's ball hiting
				ball++;
			}

			if (frameNumber == 9){
				finalScores[bowlIndex][gameNumber] = cumulScores[bowlIndex][9];
				try{
					// Updated date format after removing legacy methods on Date class
					Date date = new Date();
//						String dateString = "" + date.getHours() + ":" + date.getMinutes() + " " + date.getMonth() + "/" + date.getDay() + "/" + (date.getYear() + 1900);
					String dateString = date.toString();
					ScoreHistoryFile.addScore(currentThrower.getNickName(), dateString, Integer.toString(cumulScores[bowlIndex][9]));
				} catch (Exception e) {System.err.println("Exception in addScore. "+ e );}
			}


			setter.reset();
			bowlIndex++;

		} else {
			frameNumber++;
			bowlerIterator = (party.getMembers()).iterator();;
			bowlIndex = 0;
			if (frameNumber > 9) {
				gameFinished = true;
				gameNumber++;
			}
		}
	}

	private void gameHasFinished() {
		EndGamePrompt egp = new EndGamePrompt( ((Bowler) party.getMembers().get(0)).getNickName() + "'s Party" );
		int result = egp.getResult();
//				egp.destroy();
		egp = null;

		// TODO: send record of scores to control desk
		databaseHandler.sendReport (new GameReport (scores, party, (new Date()).toString()));

		System.out.println("result was: " + result);


		if (result == 1) {					// yes, want to play again
			resetScores();
			bowlerIterator = (party.getMembers()).iterator();;

		} else if (result == 2) {// no, dont want to play another game
			Vector printVector;
			EndGameReport egr = new EndGameReport( ((Bowler)party.getMembers().get(0)).getNickName() + "'s Party", party);
			printVector = egr.getResult();
			partyAssigned = false;
			Iterator scoreIt = party.getMembers().iterator();
			party = null;
			partyAssigned = false;

			publish(lanePublish());

			int myIndex = 0;
			while (scoreIt.hasNext()){
				Bowler thisBowler = (Bowler)scoreIt.next();
				ScoreReport sr = new ScoreReport( thisBowler, finalScores[myIndex++], gameNumber );
//						sr.sendEmail(thisBowler.getEmail());
				Iterator printIt = printVector.iterator();
				while (printIt.hasNext()){
					if (thisBowler.getNickName().equals(printIt.next())){
//								System.out.println("Printing " + thisBowler.getNickName());
						sr.sendPrintout();
					}
				}

			}
		}
	}

	public void run() {

		while (true) {
			if (partyAssigned && !gameFinished) {	// we have a party on this lane,
								// so next bower can take a throw

				checkIfPaused();
				gameIsRunning();


			} else if (partyAssigned && gameFinished) {
				gameHasFinished();
			}


			try {
				sleep(10);
			} catch (Exception ignored) {}
		}
	}

	private void lastFrame(PinsetterEvent pe) {
		if (pe.totalPinsDown() == 10) {
			setter.resetPins();
			if(pe.getThrowNumber() == 1) {
				tenthFrameStrike = true;
			}
		}

		if ((pe.totalPinsDown() != 10) && (pe.getThrowNumber() == 2 && !tenthFrameStrike)) {
			canThrowAgain = false;
			//publish( lanePublish() );
		}

		if (pe.getThrowNumber() == 3) {
			canThrowAgain = false;
			//publish( lanePublish() );
		}
	}

	private void otherThanLastFrame(PinsetterEvent pe) {
		if (pe.pinsDownOnThisThrow() == 10) {		// threw a strike
			canThrowAgain = false;
			//publish( lanePublish() );
		} else if (pe.getThrowNumber() == 2) {
			canThrowAgain = false;
			//publish( lanePublish() );
		} else if (pe.getThrowNumber() == 3)
			System.out.println("I'm here...");
	}

	public void receivePinsetterEvent(PinsetterEvent pe) {
		if (pe.pinsDownOnThisThrow() >=  0) {			// this is a real throw
			markScore(currentThrower, frameNumber + 1, pe.getThrowNumber(), pe.pinsDownOnThisThrow());

			// next logic handles the ?: what conditions dont allow them another throw?
			// handle the case of 10th frame first
			if (frameNumber == 9) {
				lastFrame(pe);
			}
			else { // its not the 10th frame
				otherThanLastFrame(pe);
			}
		}  //  this is not a real throw, probably a reset
	}

	public void assignSavedParty(Party currentParty, int[] curScores, int[][] cumulScores, int[][] finalScores, int gameNumber, int[][] scores1, int frameNumber) {
		party = currentParty;
		bowlerIterator = (party.getMembers()).iterator();;
		partyAssigned = true;

		this.curScores = curScores;
		this.cumulScores = cumulScores;
		this.finalScores = finalScores;
		this.gameNumber = gameNumber;

		Iterator bowlIt = (party.getMembers()).iterator();

		int cnt = 0;
		while(bowlIt.hasNext()) {
			scores.put(bowlIt.next(), scores1[cnt]);
			cnt++;
		}

		gameFinished = false;
		this.frameNumber = frameNumber;
	}

	void resetScores() {
		Iterator bowlIt = (party.getMembers()).iterator();

		while(bowlIt.hasNext()) {
			int[] toPut = new int[25];
			for (int i = 0; i != 25; i++){
				toPut[i] = -1;
			}
			scores.put(bowlIt.next(), toPut);
		}

		gameFinished = false;
		frameNumber = 0;
	}

	/** assignParty()
	 *
	 * assigns a party to this lane
	 *
	 * @pre none
	 * @post the party has been assigned to the lane
	 *
	 * @param theParty		Party to be assigned
	 */
	public void assignParty( Party theParty ) {
		party = theParty;
		bowlerIterator = (party.getMembers()).iterator();;
		partyAssigned = true;

		curScores = new int[party.getMembers().size()];
		cumulScores = new int[party.getMembers().size()][10];
		finalScores = new int[party.getMembers().size()][128]; //Hardcoding a max of 128 games, bite me.
		gameNumber = 0;

		resetScores();
	}

	/** markScore()
	 *
	 * Method that marks a bowlers score on the board.
	 *
	 * @param Cur		The current bowler
	 * @param frame	The frame that bowler is on
	 * @param ball		The ball the bowler is on
	 * @param score	The bowler's score
	 */
	public void markScore( Bowler Cur, int frame, int ball, int score ){
		int[] curScore;
		int index =  ( (frame - 1) * 2 + ball);

		curScore = (int[]) scores.get(Cur);


		curScore[ index - 1] = score;
		scores.put(Cur, curScore);
		getScore( Cur, frame );
		publish( lanePublish() );
	}
	/** lanePublish()
	 *
	 * Method that creates and returns a newly created laneEvent
	 *
	 * @return		The new lane event
	 */

	public LaneEvent lanePublish(  ) {
		return new LaneEvent(party, bowlIndex, currentThrower, cumulScores,
				scores, frameNumber+1, curScores, ball, gameIsHalted);
	}

	/** getScore()
	 *
	 * Method that calculates a bowlers score
	 *
	 * @param Cur		The bowler that is currently up
	 * @param frame	The frame the current bowler is on
	 *
	 * @return			The bowlers total score
	 */
	public void getScore( Bowler Cur, int frame) {
		int[] curScore;
		curScore = (int[]) scores.get(Cur);
		for (int i = 0; i != 10; i++){
			cumulScores[bowlIndex][i] = 0;
		}
		int current = 2*(frame - 1)+ball-1;

//		 TODO: Remove test print code later on
//		System.out.print(Cur.getNickName() + " bowling. curScore:\n");
//		for (int i = 0; i <= current; i++) {
//			System.out.print(curScore[i] + " ");
//		}
//		System.out.println("\nBall = " + ball);
//		System.out.println("bowlIndex = " + bowlIndex);
//		System.out.println("Current = " + current);

		ScoreCalculator scoreCalculator = new ScoreCalculator(current, frame, curScore);
		cumulScores[bowlIndex] = scoreCalculator.calculateScore();
	}

	public boolean isPartyAssigned() {
		return partyAssigned;
	}


	public void subscribe(LaneObserver adding) {
		subscribers.add(adding);
	}


	public void publish( LaneEvent event ) {
		if(subscribers.size() > 0) {
			Iterator eventIterator = subscribers.iterator();

			while(eventIterator.hasNext()) {
				((LaneObserver) eventIterator.next()).receiveLaneEvent(event);
			}
		}
	}

	public Pinsetter getPinsetter() {
		return setter;
	}

	public LaneCurrentState getCurrentState() {
		return new LaneCurrentState(party, scores, gameIsHalted, gameIsPaused, currentThrower, curScores, cumulScores, finalScores, canThrowAgain, gameNumber, frameNumber);
	}


}
