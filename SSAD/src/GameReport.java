import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Vector;

public class GameReport {
    private HashMap <Bowler, int[]> scores;
    private Party party;
    private String[] partyNames;
    private String dateString;
    private HashMap <String, Integer> totalScores;

    public GameReport (HashMap gameScores, Party gameParty, String gameDateString) {
        this.party = gameParty;
        this.scores = gameScores;
        this.dateString = gameDateString;

        partyNames = generatePartyNames (party);
        totalScores = generateTotalScores (scores);
    }

    private HashMap<String, Integer> generateTotalScores (HashMap scores) {
        HashMap<String, Integer> totalScores = new HashMap<>();
        Iterator scoresIterator = scores.entrySet().iterator();
        while (scoresIterator.hasNext()) {
            Map.Entry mapElement = (Map.Entry) scoresIterator.next();
            String bowlerName = (String) ((Bowler) mapElement.getKey()).getNickName();
            int[] bowlerScore = (int[]) mapElement.getValue();
            int bowlerTotalScore = generateTotalScoreForBowler(bowlerScore);
            totalScores.put(bowlerName, bowlerTotalScore);
        }
        return totalScores;
    }

    private int generateTotalScoreForBowler (int[] bowlerScore) {
        int sum = 0;
        for (int i = 0; i < bowlerScore.length; i++) {
            sum += bowlerScore[i];
        }
        return sum;
    }

    private String[] generatePartyNames (Party party) {
        Vector<Bowler> members = party.getMembers();
        Iterator membersIterator = members.iterator();
        Vector<String> partyNames = new Vector<>();
        while (membersIterator.hasNext()) {
            Bowler bowler = (Bowler) membersIterator.next();
            partyNames.add((String) bowler.getNickName());
            System.out.println("Getting here");
        }
        return (String[]) partyNames.toArray(new String[partyNames.size()]);
    }

    public HashMap<String, int[]> getScores () {
        HashMap<String, int[]> stringScores = new HashMap<>();
        Iterator scoresIterator = scores.entrySet().iterator();
        while (scoresIterator.hasNext()) {
            Map.Entry mapElement = (Map.Entry) scoresIterator.next();
            String bowlerName = (String) ((Bowler) mapElement.getKey()).getNickName();
            // Doubtful about the next line. mapElement.getValue() returns
            // int[] but casting to Integer[]
            int[] bowlerScore = (int[]) mapElement.getValue();
            stringScores.put(bowlerName, bowlerScore);
        }
        return stringScores;
    }

    public String[] getPartyNames () {
        return partyNames;
    }

    public HashMap<String, Integer> getTotalScores () {
        return totalScores;
    }

    public String getDateString() {
        return dateString;
    }

}
