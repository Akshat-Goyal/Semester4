import org.json.simple.JSONArray;
import org.json.simple.JSONObject;

import java.io.IOException;
import java.util.Vector;

public class GameLoader {
    public GameLoader () {}

    private static Bowler getPatron(String nickName) {
        Bowler patron = null;
        try {
            // only one patron / nick.... no dupes, no checks
            patron = BowlerFile.getBowlerInfo(nickName.substring(1, nickName.length()-1));
        } catch(IOException e) {
            System.err.println("Error..." + e);
        }
        return patron;
    }

    private static Party getParty(final Vector<String> partyNicks) {
        final Vector<Bowler> partyBowlers = new Vector<>();
        for (final String partyNick : partyNicks) {
            final Bowler newBowler = getPatron(partyNick);
            partyBowlers.add(newBowler);
        }
        final Party newParty = new Party(partyBowlers, true);
        return newParty;
    }


    public static void selectAndLoad (String selectedParty, ControlDeskView controlDeskView, LoadGameFrame loadGameFrame) {
        if (selectedParty != null) {
            JSONArray data = JsonConverter.loadData();

            for(Object obj: data) {
                JSONObject object = (JSONObject) obj;
                String curParty = object.get("Party").toString();

                if(selectedParty.equals(curParty)) {

                    Vector<String> partyNicks = JsonConverter.parse(selectedParty);
                    Party currentParty = getParty(partyNicks);
                    controlDeskView.getControlDesk().assignLaneToSaved(object, currentParty,
                            JsonConverter.parse1DArray((JSONArray)object.get("curScores")),
                            JsonConverter.parse2DArray((JSONArray)object.get("cumulScores")),
                            JsonConverter.parse2DArray((JSONArray)object.get("finalScores")),
                            Math.toIntExact((long)object.get("gameNumber")),
                            JsonConverter.parse2DArray((JSONArray)object.get("scores")),
                            Math.toIntExact((long)object.get("frameNumber")));

                    break;
                }
            }
            loadGameFrame.closeWindow();
        }
    }

}
