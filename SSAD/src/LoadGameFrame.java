import javax.swing.*;
import java.awt.*;

public class LoadGameFrame {
    public JFrame win;

    public LoadGameFrame (Panel colPanel) {
        win = new JFrame("Add Party");
        win.getContentPane().setLayout(new BorderLayout());
        ((JPanel) win.getContentPane()).setOpaque(false);

        win.getContentPane().add("Center", colPanel.getJPanel());
        win.pack();

        Dimension screenSize = (Toolkit.getDefaultToolkit()).getScreenSize();
        WinLocation window = new WinLocation();
        window.setCentre(win, screenSize);
    }

    public void closeWindow () {
        win.setVisible(false);
    }
}
