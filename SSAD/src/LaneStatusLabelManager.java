import javax.swing.*;

public class LaneStatusLabelManager {
    private JLabel curBowler, pinsDown;

    public LaneStatusLabelManager (Panel panel) {
        panel.addJLabel("Now Bowling: ");
        curBowler = panel.addJLabel("(no one)");
        panel.addJLabel("Pins Down: ");
        pinsDown = panel.addJLabel("0");
    }

    public void changeBowler (String bowlerName) {
        curBowler.setText(bowlerName);
    }

    public void changePinsDown (String newPinsDown) {
        pinsDown.setText(newPinsDown);
    }
}
