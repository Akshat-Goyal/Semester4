import org.json.simple.JSONArray;
import org.json.simple.JSONObject;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public class DatabaseHandler {
    private JsonIO jsonIO;
    private String fileName;
    private JSONObject databaseJson;

    public DatabaseHandler (String fName) {
        jsonIO = new JsonIO();
        fileName = fName;
        databaseJson = jsonIO.readFromFile(fileName);
    }

    private void handleBowlerScoresData (HashMap totalScores) {
        JSONObject bowlers;
        readFile();
        try {
            bowlers = (JSONObject) databaseJson.get("bowlers");
            if (bowlers == null) {
                throw new RuntimeException("Bowlers object not found");
            }
        } catch (RuntimeException e) {
//            System.out.println("Bowlers object not found");
//            e.printStackTrace();
            bowlers = new JSONObject();
        }
        Iterator iterator = totalScores.entrySet().iterator();
        while (iterator.hasNext()) {
            Map.Entry mapElement = (Map.Entry) iterator.next();
            String bowlerName = (String) mapElement.getKey();
            Integer totalScoreForGame = (Integer) mapElement.getValue();

            JSONObject bowlerJson;
            try {
                bowlerJson = (JSONObject) bowlers.get(bowlerName);
                if (bowlerJson == null) {
                    throw new RuntimeException("Bowler not found.");
                }
                bowlerJson.put("numberOfGames", ((Long) bowlerJson.get("numberOfGames")) + 1);
                bowlerJson.put("totalScore", ((Long) bowlerJson.get("totalScore"))
                        + totalScoreForGame);
                bowlerJson.put("averageScore", ((Long) bowlerJson.get("totalScore")).doubleValue()
                        / ((Long) bowlerJson.get("numberOfGames")).doubleValue() );
            } catch (RuntimeException e) {
                System.out.println("Bowler " + bowlerName + " not found.");
//                e.printStackTrace();
                bowlerJson = new JSONObject();
                bowlerJson.put("numberOfGames", 1);
                bowlerJson.put("totalScore", totalScoreForGame);
                bowlerJson.put("averageScore", totalScoreForGame);
            }

            bowlers.put(bowlerName, bowlerJson);
        }

        databaseJson.put("bowlers", bowlers);
    }

    private void handleGameData (JSONObject curGame) {
        JSONObject games;
        try {
            games = (JSONObject) databaseJson.get("games");
            if (games == null) {
                throw new RuntimeException("Exception: Games object not found.");
            }
        } catch (RuntimeException e) {
            System.out.println("games object not found");
//            e.printStackTrace();
            games = new JSONObject();
        }
        Long gameNo;
        try {
            gameNo = ((Long) databaseJson.get("lastGameNo")) + 1;
            if (gameNo == null) {
                throw new RuntimeException("Exception: Game number not found.");
            }
        } catch (RuntimeException e) {
            System.out.println("game number not found");
//            e.printStackTrace();
            gameNo = 1L;
        }
        games.put("game" + gameNo, curGame);
        databaseJson.put("games", games);
        databaseJson.put("lastGameNo", gameNo);
    }

    private void saveFile () {
        jsonIO.writeToFile(databaseJson, fileName);
    }

    private void readFile () {
        databaseJson = jsonIO.readFromFile(fileName);
    }

    public void sendReport (GameReport gameReport) {
        System.out.println("\nGenerating report");

        readFile();

        JSONObject curGame = new JSONObject();
        String[] partyNames = gameReport.getPartyNames();
        HashMap<String, int[]> scores = gameReport.getScores();
        HashMap<String, Integer> totalScores = gameReport.getTotalScores();
        JsonConverter jsonConverter = new JsonConverter();

        JSONObject scoresJson = jsonConverter.getScoresJson(scores);
        JSONArray partyNamesJson = jsonConverter.stringArrayToJson(partyNames);
        JSONObject totalScoresJson = jsonConverter.getTotalScoresJson(totalScores);

        curGame.put("party", partyNamesJson);
        curGame.put("totalScores", totalScoresJson);
        curGame.put("scores", scoresJson);
        curGame.put("date", gameReport.getDateString());

        handleBowlerScoresData(totalScores);
        handleGameData(curGame);

        saveFile();
    }

}
