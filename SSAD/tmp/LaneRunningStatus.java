import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.simple.parser.ParseException;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Vector;

public class LaneRunningStatus {
    Lane lane;
    LaneVariables laneVariables;

    public LaneRunningStatus(Lane lane) {
        this.lane = lane;
        this.laneVariables = lane.laneVariables;
    }

    public void pauseGame() {
        laneVariables.gameIsHalted = true;
        lane.publish(lane.lanePublish());
    }

    /**
     * Resume the execution of this game
     */
    public void unPauseGame() {
        laneVariables.gameIsHalted = false;
        lane.publish(lane.lanePublish());
    }

    private JSONArray loadData() {
        JSONParser jsonParser = new JSONParser();

        try (FileReader reader = new FileReader("./data/GameData.json"))
        {
            Object obj = jsonParser.parse(reader);
            return (JSONArray) obj;

        } catch (ParseException | IOException e) {
//            e.printStackTrace();
        }

        return (new JSONArray());
    }


    private JSONObject currentData() {
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

    private void writeData(JSONArray gameDataArray) {
        try {
            FileWriter file = new FileWriter("./data/GameData.json");
            file.write(gameDataArray.toJSONString());
            file.close();
        } catch (IOException e) {
//            e.printStackTrace();
        }
    }

    public void pause() {

        laneVariables.gameIsPaused = true;

        JSONObject gameData = currentData();
        JSONArray gameDataArray = loadData();
        gameDataArray.add(gameData);
        writeData(gameDataArray);
    }

    public void resume() {

        JSONObject gameData = currentData();
        JSONArray gameDataArray = loadData();
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
        writeData(newData);

        lane.laneVariables.gameIsPaused = false;
    }
}
