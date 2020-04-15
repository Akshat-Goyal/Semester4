import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Vector;

public class LaneRunningStatus {
    Lane lane;

    public LaneRunningStatus(Lane lane) {
        this.lane = lane;
    }

    public void pauseGame() {
        lane.gameIsHalted = true;
        lane.publish(lane.lanePublish());
    }

    /**
     * Resume the execution of this game
     */
    public void unPauseGame() {
        lane.gameIsHalted = false;
        lane.publish(lane.lanePublish());
    }



    private JSONObject currentData(LaneCurrentState laneVariables) {
        JSONObject gameData = new JSONObject();
        JSONArray partyMembers = new JSONArray();
        for(Object member: laneVariables.party.getMembers()) {
            partyMembers.add(((Bowler)member).getNickName());
        }
        gameData.put("Party", partyMembers);

        Vector bowlers = laneVariables.party.getMembers();

        HashMap scoresMap = laneVariables.scores;
        JSONArray scores = new JSONArray();

        for(int i = 0; i < bowlers.size(); i++)
        {
            int[] ans = (int[])scoresMap.get(bowlers.get(i));
            JSONArray score = new JSONArray();
            for(int j = 0; j < ans.length; j++){
                score.add(ans[j]);
            }

            scores.add(score);
        }
        gameData.put("scores", scores);

        gameData.put("gameIsHalted", laneVariables.gameIsHalted);
        gameData.put("gameIsPaused", laneVariables.gameIsPaused);
        gameData.put("currentThrower", laneVariables.currentThrower.getFullName());

        JSONArray curScores = new JSONArray();
        for(int score: laneVariables.curScores) {
            curScores.add(score);
        }
        gameData.put("curScores", curScores);

        JSONArray cumulativeScores = new JSONArray();

        for(int[] cumulativeScore: laneVariables.cumulScores) {

//            System.out.println(cumulativeScore);;

            JSONArray cumulScore = new JSONArray();

            for(int cScore: cumulativeScore) {
                cumulScore.add(cScore);
            }

            cumulativeScores.add(cumulScore);
        }
        gameData.put("cumulScores", cumulativeScores);

        JSONArray finalScores = new JSONArray();

        for(int[] finalScore: laneVariables.finalScores) {

            JSONArray fScores = new JSONArray();

//            System.out.println(finalScore);

            for(int fScore: finalScore) {
                fScores.add(fScore);
            }

            finalScores.add(fScores);
        }
        gameData.put("finalScores", finalScores);

        gameData.put("canThrowAgain", laneVariables.canThrowAgain);
        gameData.put("frameNumber", laneVariables.frameNumber);
        gameData.put("gameNumber", laneVariables.gameNumber);

        return gameData;
    }



    public void pause(LaneCurrentState laneVariables) {

        lane.gameIsPaused = true;

        JSONObject gameData = currentData(laneVariables);
        JSONArray gameDataArray = JsonConverter.loadData();
        gameDataArray.add(gameData);
        JsonConverter.writeData(gameDataArray);
    }

    public void resume(LaneCurrentState laneVariables) {

        JSONObject gameData = currentData(laneVariables);
        JSONArray gameDataArray = JsonConverter.loadData();
//        System.out.println(gameData);

        JSONArray newData = new JSONArray();

        boolean got = false;

        for (Object obj : gameDataArray) {
            JSONObject object = (JSONObject) obj;

            ArrayList<String> fromFile = (ArrayList<String>) object.get("Party");
            ArrayList<String> fromGame = (ArrayList<String>) gameData.get("Party");

            if (got || !fromFile.equals(fromGame)) {
                newData.add(object);
            }

            else {
                got = true;
            }

        }
        JsonConverter.writeData(newData);

        lane.gameIsPaused = false;
    }
}