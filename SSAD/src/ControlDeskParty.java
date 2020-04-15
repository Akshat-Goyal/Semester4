import java.io.IOException;
import java.util.Iterator;
import java.util.Vector;

public class ControlDeskParty {

    private static ControlDeskParty partyHandler = null;
    private final Queue partyQueue;
    private final Vector<ControlDeskObserver> subscribers;

    private ControlDeskParty() {
        partyQueue = new Queue();
        subscribers = new Vector<>();
    }

    public static ControlDeskParty getInstance()
    {
        if (partyHandler == null)
            partyHandler = new ControlDeskParty();

        return partyHandler;
    }

    public Queue getQueue() {
        return partyQueue;
    }

    private Bowler getPatron(String nickName) {
        Bowler patron = null;

        try {
            // only one patron / nick.... no dupes, no checks
            patron = BowlerFile.getBowlerInfo(nickName);

        } catch(IOException e) {
            System.err.println("Error..." + e);
        }

        return patron;
    }

    public final void addPartyQueue(final Vector<String> partyNicks) {
        final Vector<Bowler> partyBowlers = new Vector<>();
        for (final String partyNick : partyNicks) {
            final Bowler newBowler = getPatron(partyNick);
            partyBowlers.add(newBowler);
        }
        final Party newParty = new Party(partyBowlers, false);
        partyQueue.add(newParty);
    }

    public Vector<String> getPartyQueue() {
        Vector<String> displayPartyQueue = new Vector<>();

        for(Object p: partyQueue.asVector()) {
            String nextParty =
                    ((Bowler) ((Party) p ).getMembers()
                            .get(0))
                            .getNickName() + "'s Party";
            displayPartyQueue.addElement(nextParty);
        }

        return displayPartyQueue;
    }

    public void subscribe(ControlDeskObserver adding) {
        subscribers.add(adding);
    }

    public void publish(ControlDeskEvent event) {
        Iterator eventIterator = subscribers.iterator();
        while (eventIterator.hasNext()) {
            ((ControlDeskObserver) eventIterator.next()).receiveControlDeskEvent(event);
        }
    }
}
