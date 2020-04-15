import javax.swing.*;
import java.awt.*;

public class WinLocation {
    public WinLocation() {
    }

    private int getScreenSizeWidth(Dimension screenSize) {
        return screenSize.width/2;
    }

    private int getWindowSizeWidth(JFrame win) {
        return win.getSize().width/2;
    }

    private int getX(JFrame win, Dimension screenSize) {
        return (getScreenSizeWidth(screenSize) - getWindowSizeWidth(win));
    }

    private int getScreenSizeHeight(Dimension screenSize) {
        return screenSize.height/2;
    }

    private int getWindowSizeHeight(JFrame win) {
        return win.getSize().height/2;
    }

    private int getY(JFrame win, Dimension screenSize) {
        return (getScreenSizeHeight(screenSize) - getWindowSizeHeight(win));
    }

    private void setLocation(JFrame win, Dimension screenSize) {
        win.setLocation(
                getX(win, screenSize),
                getY(win, screenSize));
    }

    public void setCentre(JFrame win, Dimension screenSize){
        setLocation(win, screenSize);
        win.setVisible(true);
    }
}
