
import java.util.HashMap;

public class LaneCurrentState {

    public Party party;
    public HashMap scores;
    public boolean gameIsHalted;
    public boolean gameIsPaused;
    public Bowler currentThrower;
    public int[] curScores;
    public int[][] cumulScores;
    public int[][] finalScores;
    public boolean canThrowAgain;
    public int gameNumber;
    public int frameNumber;

    public LaneCurrentState(Party p, HashMap scores, boolean gameIsHalted, boolean gameIsPaused, Bowler currentThrower, int[] curScores, int[][] cumulScores, int[][] finalScores, boolean canThrowAgain, int gameNumber, int frameNumber) {
        this.party = p;
        this.scores = scores;
        this.gameIsHalted = gameIsHalted;
        this.gameIsPaused = gameIsPaused;
        this.currentThrower = currentThrower;
        this.curScores = curScores;
        this.cumulScores = cumulScores;
        this.finalScores = finalScores;
        this.canThrowAgain = canThrowAgain;
        this.gameNumber = gameNumber;
        this.frameNumber = frameNumber;
    }

}