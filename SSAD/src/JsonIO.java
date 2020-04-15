import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.simple.parser.ParseException;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.Reader;

public class JsonIO {

    JSONObject jsonObject;
    JSONParser parser;

    public JsonIO() {
        parser = new JSONParser();
    }

    public JSONObject readFromFile (String fileName) {
        try (Reader reader = new FileReader(fileName)) {
            jsonObject = (JSONObject) parser.parse(reader);
        } catch (IOException e) {
            e.printStackTrace();
            jsonObject = new JSONObject();
            writeToFile(jsonObject, fileName);
        } catch (ParseException e) {
            e.printStackTrace();
        }
        return jsonObject;
    }

    public void writeToFile (JSONObject jsonObject, String fileName) {
        try (FileWriter fileWriter = new FileWriter(fileName)) {
            fileWriter.write(jsonObject.toJSONString());
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public JSONObject getJsonObject () {
        return jsonObject;
    }
}
