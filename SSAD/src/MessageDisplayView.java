import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Vector;

public class MessageDisplayView implements ActionListener {

    public  JFrame win;
    private ButtonPanel buttonPanel;


    private Panel buildPanels() {
        // Label Panel
        Panel labelPanel = new Panel("");
        labelPanel.addJLabel("     Please wait for a lane to be empty. Then Load the Game.     ");

        Insets buttonMargin = new Insets(4, 4, 4, 4);

        buttonPanel = new ButtonPanel("", 1, 2);
        buttonPanel.add("Exit", this, true);

        Panel colPanel = new Panel("", 2, 1);
        colPanel.addPanel(labelPanel.getJPanel());
        colPanel.addPanel(buttonPanel.getJPanel());

        return colPanel;
    }

    public MessageDisplayView() {

        win = new JFrame("Cannot Load Game" );
        win.getContentPane().setLayout(new BorderLayout());
        ((JPanel) win.getContentPane()).setOpaque(false);

        Panel colPanel = buildPanels();

        win.getContentPane().add("Center", colPanel.getJPanel());

        win.pack();

        // Center Window on Screen
        Dimension screenSize = (Toolkit.getDefaultToolkit()).getScreenSize();
        WinLocation window = new WinLocation();
        window.setCentre(win, screenSize);
    }

    private void finished() {
        win.setVisible(false);
    }


    @Override
    public void actionPerformed(ActionEvent e) {
        final Object source = e.getSource();

        if (source.equals(buttonPanel.get("Exit"))) {
            finished();
        }
    }

}