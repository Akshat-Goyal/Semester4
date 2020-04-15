import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.simple.parser.ParseException;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;

public class JsonConverter {
    public JsonConverter () {

    }

    private JSONArray intArrayToJson (int[] elements) {
        JSONArray arr = new JSONArray();
        for (int i = 0; i < elements.length; i++) {
            arr.add(elements[i]);
        }
        return arr;
    }

    public JSONArray stringArrayToJson (String[] elements) {
        JSONArray arr = new JSONArray();
        for (int i = 0; i < elements.length; i++) {
            arr.add(elements[i]);
        }
        return arr;
    }

    public JSONObject getScoresJson (HashMap scores) {
        JSONObject scoresJson = new JSONObject();
        Iterator scoresIterator = scores.entrySet().iterator();
        while (scoresIterator.hasNext()) {
            Map.Entry mapElement = (Map.Entry) scoresIterator.next();
            int[] scoreArray = (int[]) mapElement.getValue();
            scoresJson.put(mapElement.getKey(), intArrayToJson(scoreArray));
        }
        return scoresJson;
    }

    public JSONObject getTotalScoresJson (HashMap totalScores) {
        JSONObject totalScoresJson = new JSONObject();
        Iterator scoresIterator = totalScores.entrySet().iterator();
        while (scoresIterator.hasNext()) {
            Map.Entry mapElement = (Map.Entry) scoresIterator.next();
            totalScoresJson.put(mapElement.getKey(), mapElement.getValue());
        }
        return totalScoresJson;
    }

    public static JSONArray loadData() {
        JSONParser jsonParser = new JSONParser();

        try (FileReader reader = new FileReader(Constants.getPausedGameFileName()))
        {
            Object obj = jsonParser.parse(reader);
            return (JSONArray) obj;

        } catch (ParseException | IOException e) {
//            e.printStackTrace();
        }

        return (new JSONArray());
    }

    public static Vector<String> parse(String s) {
        Vector<String> output = new Vector<>();
        String[] strings = s.replace("[", "").replace("]", "").split(",");
        for(String string: strings) {
            output.add(string);
        }
        return output;
    }

    public static int[] parse1DArray(JSONArray array) {
        int[] arr = new int[array.size()];
        for(int i = 0; i < array.size(); i++) {
            arr[i] = Math.toIntExact((long)(array.get(i)));
        }

        return arr;
    }

    public static int[][] parse2DArray(JSONArray array) {
//        System.out.println(array);
        int[][] arr = new int[array.size()][];
        for(int i = 0; i < array.size(); i++) {
            JSONArray newArray = (JSONArray)array.get(i);
            arr[i] = parse1DArray(newArray);
        }
//        System.out.println(Arrays.deepToString(arr));
        return arr;
    }

    public static void writeData(JSONArray gameDataArray) {
        try {
            FileWriter file = new FileWriter(Constants.getPausedGameFileName());
            file.write(gameDataArray.toJSONString());
            file.close();
        } catch (IOException e) {
//            e.printStackTrace();
        }
    }

    public static void removeSavedData(JSONObject gameData) {
        JSONArray gameDataArray = JsonConverter.loadData();

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
    }

}
