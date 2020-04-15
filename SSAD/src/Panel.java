import javax.swing.*;
import javax.swing.border.TitledBorder;
import java.awt.*;

public class Panel {
    JPanel panel;

    Panel(String title) {
        panel = new JPanel();
        panel.setLayout(new FlowLayout());

        if(!title.isEmpty()) {
            panel.setBorder(new TitledBorder(title));
        }
    }

    Panel(String title, int rows, int columns) {
        panel = new JPanel();
        panel.setLayout(new GridLayout(rows, columns));

        if(!title.isEmpty()) {
            panel.setBorder(new TitledBorder(title));
        }
    }

    public JLabel addJLabel(String text) {
        JLabel label = new JLabel(text);
        panel.add(label);

        return label;
    }

    public void addPanel(JPanel panelToAdd) {
        panel.add(panelToAdd);
    }

    public void addPanel(JPanel panelToAdd, String direction) {
        panel.add(panelToAdd, direction);
    }

    public JPanel getJPanel() {
        return this.panel;
    }
}
