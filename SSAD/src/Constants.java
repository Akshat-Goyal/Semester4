public class Constants {

    private static int numLanes = 3;
    private static int maxPatronsPerParty = 10;
    private static String storageFileName = "./data/Database.json";
    private static String pausedGameFileName = "./data/GameData.json";

    public static int getNumLanes() {
        return numLanes;
    }

    public static int getMaxPatronsPerParty() {
        return maxPatronsPerParty;
    }

    public static String getStorageFileName() {
        return storageFileName;
    }

    public static String getPausedGameFileName() {
        return pausedGameFileName;
    }
}
