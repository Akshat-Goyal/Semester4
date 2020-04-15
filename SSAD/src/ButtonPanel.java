import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.util.HashMap;

public class ButtonPanel extends Panel {

    HashMap<String, JButton> buttons;

    ButtonPanel(String title) {
        super(title);
        buttons = new HashMap<>();
    }

    ButtonPanel(String title, int rows, int columns) {
        super(title, rows, columns);
        buttons = new HashMap<>();
    }

    public void add(String name, ActionListener listener, boolean toAddToPanel) {
        JButton button = new JButton(name);
        JPanel typePanel = new JPanel();
        typePanel.setLayout(new FlowLayout());
        button.addActionListener(listener);
        typePanel.add(button);

        if(toAddToPanel) {
            panel.add(typePanel);
        }

        buttons.put(name, button);
    }

    public JPanel getPanel() {
        return this.panel;
    }

    public Component get(String key) {
        return buttons.get(key);
    }
}
