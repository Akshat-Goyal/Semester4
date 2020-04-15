public class drive {

	public static void main(String[] args) {

	    String storageFileName = Constants.getStorageFileName();
		ControlDeskParty partyHandler = ControlDeskParty.getInstance();
		DatabaseHandler mainDatabaseHandler = new DatabaseHandler(storageFileName);

		int numLanes = Constants.getNumLanes();
		int maxPatronsPerParty = Constants.getMaxPatronsPerParty();

		Alley a = new Alley(numLanes, mainDatabaseHandler);

		ControlDesk controlDesk;
		controlDesk = a.getControlDesk();
		ControlDeskView controlDeskView = new ControlDeskView(controlDesk, maxPatronsPerParty);

		partyHandler.subscribe(controlDeskView);
	}
}
