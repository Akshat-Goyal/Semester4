import org.json.simple.JSONObject;

import java.util.Iterator;
import java.util.Map;
import java.util.Vector;

public class QueriesHandler {
    JsonIO jsonIO;
    JSONObject databaseJson, bowlersJson, gamesJson;
    String fileName;

    public QueriesHandler () {
        jsonIO = new JsonIO();
        fileName = Constants.getStorageFileName();

        refresh();
    }

    public void refresh () {
        databaseJson = jsonIO.readFromFile(fileName);
        try {
            bowlersJson = (JSONObject) databaseJson.get("bowlers");
            if (bowlersJson == null) {
                System.out.println("Bowlers object not found");
                bowlersJson = new JSONObject();
            }
        } catch (Exception e) {
            e.printStackTrace();
            System.out.println("Bowlers object not found");
            bowlersJson = new JSONObject();
        }
        try {
            gamesJson = (JSONObject) databaseJson.get("games");
            if (gamesJson == null) {
                System.out.println("Games object not found");
                gamesJson = new JSONObject();
            }
        } catch (Exception e) {
            e.printStackTrace();
            System.out.println("Games object not found");
            gamesJson = new JSONObject();
        }
    }

    public Vector<String> getAllGamesScores (String bowlerName) {
        refresh();
        Vector<String> results = new Vector<>();
        Iterator iterator = gamesJson.entrySet().iterator();
        while (iterator.hasNext()) {
            Map.Entry mapElement = (Map.Entry) iterator.next();
            JSONObject game = (JSONObject) mapElement.getValue();
            double score = getPlayerScoreFromGame(bowlerName, game);
            if (score != -1) {
                results.addElement(score + " on " + ((String) game.get("date")));
            }
        }
        return results;
    }

    public Vector<String> getLastFiveGameScores (String bowlerName) {
        Vector<String> results;
        results = getAllGamesScores (bowlerName);
        while (results.size() > 5) {
            results.remove(0);
        }
        if (results.isEmpty()) {
            results.addElement("(No games were found)");
        } else if (results.size() < 5) {
            results.addElement("(This player has only played " + results.size() + " games)");
        }
        return results;
    }

    public Vector<String> getAllBowlers() {
        refresh();
        Vector<String> results = new Vector<>();
//        System.out.println("Why is this running?");
//        System.out.println(bowlersJson);
        Iterator iterator = bowlersJson.entrySet().iterator();
        while (iterator.hasNext()) {
            Map.Entry mapElement = (Map.Entry) iterator.next();
            String bowlerName = (String) mapElement.getKey();
            results.addElement(bowlerName);
        }
        if (results.isEmpty()) {
            results.add("(No bowlers were found)");
        }
        return results;
    }

    public double getPlayerScoreFromGame (String bowlerName, JSONObject game) {
        JSONObject totalScores = (JSONObject) game.get("totalScores");
        double score;
        try {
            score = (double) ((Number) totalScores.get(bowlerName)).doubleValue();
        } catch (RuntimeException e) {
            score = -1;
        }
        // Returns -1 if the player is not found in the game
        return score;
    }

    public Vector<String> getIndividualScore(String bowlerName, String highestOrLowest) {
        refresh();
        Vector<String> results = new Vector<>();
        double extremeScore = -1.0;
        if (highestOrLowest == "lowest") {
            extremeScore = 1000000.0;
        }
        Iterator iterator = gamesJson.entrySet().iterator();
        while (iterator.hasNext()) {
            Map.Entry mapElement = (Map.Entry) iterator.next();
            JSONObject game = (JSONObject) mapElement.getValue();
            double score = getPlayerScoreFromGame(bowlerName, game);
//            System.out.println(score);
            if ((score != -1) && ((((highestOrLowest == "highest") && (score > extremeScore))
                    || ((highestOrLowest == "lowest") && (score < extremeScore))))) {
                results.clear();
                results.addElement(String.valueOf(score) + " on " + ((String) game.get("date")));
                extremeScore = score;
            }
        }
        if (results.isEmpty()) {
            results.add("(No games were found for this player)");
        }
        return results;
    }

    public Vector<String> getExtremeBowlers(String highestOrLowest, String queryParameter) {
        refresh();
        Vector<String> results = new Vector<>();
        double extremeScore = 0.0;
        if (highestOrLowest == "lowest") {
            extremeScore = 10000000.0;
        }
        Iterator iterator = bowlersJson.entrySet().iterator();

        while (iterator.hasNext()) {
            Map.Entry mapElement = (Map.Entry) iterator.next();
            String bowlerName = (String) mapElement.getKey();
            JSONObject bowlerStats = (JSONObject) mapElement.getValue();
            double totalScore = ((Number) bowlerStats.get(queryParameter)).doubleValue();

            if (((highestOrLowest == "highest") && (totalScore > extremeScore))
                    || ((highestOrLowest == "lowest") && (totalScore < extremeScore))) {
                results.clear();
                results.addElement(bowlerName + " : " + totalScore);
                extremeScore = totalScore;
            } else if (totalScore == extremeScore) {
                results.addElement(bowlerName + " : " + totalScore);
            }
        }
//        System.out.println(results);
        if (results.isEmpty()) {
            results.addElement("(No bowlers found)");
        }
        return results;
    }

}
