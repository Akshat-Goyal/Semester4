import javax.swing.*;
import java.awt.*;
import java.util.HashMap;

public class TextPanel extends Panel {
    HashMap<String, JTextField> fields;

    TextPanel(String title, int rows, int columns) {
        super(title, rows, columns);
        fields = new HashMap<>();
    }

    public void add(String text, int columns) {
        JPanel typePanel = new JPanel();
        typePanel.setLayout(new FlowLayout());
        JLabel typeLabel = new JLabel(text);
        JTextField typeField = new JTextField("", columns);
        typePanel.add(typeLabel);
        typePanel.add(typeField);
        panel.add(typePanel);
        fields.put(text, typeField);
    }

    public JPanel getPanel() {
        return this.panel;
    }

    public String getText(String key) {
        JTextField field = fields.get(key);
        return field.getText();
    }
}
