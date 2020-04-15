

/**
 *  Class for calculating the score of a bowler at any turn given
 *  the array of the number of pins downed at each step
 *
 */

public class ScoreCalculator {
    private final int score;
    private final int current;
    private final int frame;
    private final int[] curScore;

    public ScoreCalculator (int currentBall, int currentFrame, int[] currentScore) {
        this.score = 0;
        this.current = currentBall;
        this.frame = currentFrame;
        this.curScore = new int[currentScore.length];
        System.arraycopy(currentScore, 0, curScore, 0, currentScore.length);
    }

    public void getAll () {
//        System.out.println("Created new ScoreCalculator and getting all.");
//        System.out.println("score = " + score);
//        System.out.println("current = " + current);
//        System.out.println("frame = " + frame);
//        System.out.println("curScore = ");
//        for (int value : curScore) {
//            System.out.printf(value + " ");
//        }
//        System.out.println();
    }

    private boolean isSpare (int firstPinsDown, int secondPinsDown) {
        return firstPinsDown + secondPinsDown == 10;
    }



    private boolean isStrike (int pinsDown) {
        return pinsDown == 10;
    }

    // TODO: Refactor by splitting into smaller methods
    private boolean handleStrike (int i, int[] cumulScores) {
        int ballsAfterStrike = 0;

        //This ball is the first ball, and was a strike.
        //If we can get 2 balls after it, good add them to cumul.
        if (curScore[i+2] != -1) {
            ballsAfterStrike = 1;
            if ((curScore[i+3] != -1) || (curScore[i+4] != -1)){
                //Still got em.
                ballsAfterStrike = 2;
            }
        }

        if (ballsAfterStrike == 2){
            //Add up the strike.
            //Add the next two balls to the current cumulscore.
            cumulScores[i/2] += 10;
            if (curScore[i+1] == -1) {
                if (i / 2 > 0) {
                    cumulScores[i / 2] += curScore[i + 2] + cumulScores[(i / 2) - 1];
                } else {
                    cumulScores[i / 2] += curScore[i + 2];
                }
                if (curScore[i + 3] != -1) {
                    if (curScore[i + 3] != -2) {
                        cumulScores[(i / 2)] += curScore[i + 3];
                    }
                } else {
                    cumulScores[(i / 2)] += curScore[i + 4];
                }
            } else {
                System.out.println("SOMETHING WEIRD IS HAPPENING.");
            }
        } else {
//            break;
            return false;
        }
        return true;
    }

    // TODO: Refactor by splitting into smaller methods
    private void handleRegularThrow (int i, int[] cumulScores) {
        if(i < 18) {
            if (i % 2 == 0) {
                // The ball is the first throw in the frame
                if (i == 0) {
                    // First frame, first ball.  Set his cumul score to the first ball
                    if (curScore[i] != -2) {
                        cumulScores[i] += curScore[i];
                    }
                } else {
                    // Any other case
                    // Add his last frame's cumul to this ball, make it this frame's cumul.

                    cumulScores[i / 2] += cumulScores[i / 2 - 1];

                    if (curScore[i] != -2) {
                        cumulScores[i / 2] += curScore[i];
                    }
                }
            } else {
                // The ball is the second throw in the frame
                if ((curScore[i] != -1) && (i > 0)) {
                    if (curScore[i] != -2) {
                        cumulScores[i / 2] += curScore[i];
                    }
                }
            }
        }

        else if (i == 18) {
            cumulScores[9] += cumulScores[8];
        }

        if (i/2 == 10 || i/2 == 9) {
            if(curScore[i] != -2){
                cumulScores[9] += curScore[i];
            }
        }
    }

    private void handleSpareSecondBall (int i, int[] cumulScores) {
        cumulScores[(i/2)] += curScore[i+1] + curScore[i];
    }

    public int[] calculateScore () {
        int[] cumulScores = new int[10];

        //Iterate through each ball until the current one + 2
        for (int i = 0; i != current+2; i++) {
            if ((i%2 == 1) && (isSpare(curScore[i], curScore[i-1])) && (i < current - 1) && (i < 19)) {
                // This ball was the second of a spare.
                // Also, we're not on the current ball.
                // Add the next ball to the ith one in cumul.
                handleSpareSecondBall (i, cumulScores);
            } else if ((i%2 == 0) && (i < current) && (isStrike(curScore[i])) && (i < 18)) {
                // First ball of the frame and is a strike and
                // we are not on the current ball
                boolean isValid = handleStrike(i, cumulScores);
                if (!isValid) {
                    break;
                }
            } else {
                //We're dealing with a normal throw, add it and be on our way.
                handleRegularThrow(i, cumulScores);
            }
        }

        return cumulScores;
    }

}
