import java.awt.*;
import java.awt.event.ActionListener;

public class LaneStatusButtonPanel extends ButtonPanel {

    public LaneStatusButtonPanel(String title, ActionListener listener) {
        super(title);
        this.add("View Lane", listener, true);
        this.get("View Lane").setEnabled(false);
        this.add("Pinsetter", listener, true);
        this.get("Pinsetter").setEnabled(false);
        this.add("     ", listener, true);
        this.get("     ").setBackground(Color.GREEN);
        this.add("Pause and Save", listener, true);
        this.get("Pause and Save").setEnabled(false);
        this.add("Resume", listener, true);
        this.get("Resume").setEnabled(false);
    }

    public void deactivateLane() {
        this.get("View Lane").setEnabled(false);
        this.get("Pinsetter").setEnabled(false);
        this.get("Pause and Save").setEnabled(false);
        this.get("Resume").setEnabled(false);
    }

    public void setGreen() {
        this.get("     ").setBackground(Color.GREEN);
    }

    public void setRed() {
        this.get("     ").setBackground(Color.RED);
    }

    public void pause() {
        this.get("Pause and Save").setEnabled(false);
        this.get("Resume").setEnabled(true);
    }

    public void resume() {
        this.get("Pause and Save").setEnabled(true);
        this.get("Resume").setEnabled(false);
    }

    public void actOnLaneEvent(boolean isMechanicalProblem, boolean isPartyAssigned, boolean isGamePaused) {
        if (isMechanicalProblem) {
            this.setRed();
        }
        if (!isPartyAssigned) {
            this.deactivateLane();
        } else {
            this.activateLane(isGamePaused);
        }
    }

    public void activateLane(boolean isGamePaused) {
        this.get("View Lane").setEnabled(true);
        this.get("Pinsetter").setEnabled(true);

        if(isGamePaused) {
            pause();
        }
        else {
            resume();
        }
    }

}
