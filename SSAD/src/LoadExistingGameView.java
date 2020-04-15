import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Vector;

public class LoadExistingGameView implements ActionListener, ListSelectionListener {

    private LoadGameFrame loadGameFrame;
    private ScrollPanel<String> gamesPanel;
    private ButtonPanel buttonPanel;

    private final ControlDeskView controlDesk;
    private String selectedParty;

    private Panel buildPanels(Vector <String> partyList) {
        gamesPanel = new ScrollPanel<>("List of Parties", partyList, 480, 8, true, this);

        buttonPanel = new ButtonPanel("", 2, 1);
        buttonPanel.add("Select Game", this, true);
        buttonPanel.add("Exit", this, true);

        Panel colPanel = new Panel("", 1, 3);
        colPanel.addPanel(gamesPanel.getPanel());
        colPanel.addPanel(buttonPanel.getPanel());

        return colPanel;
    }

    public LoadExistingGameView(ControlDeskView controlDesk, Vector <String> partyList) {
        this.controlDesk = controlDesk;

        Panel colPanel = buildPanels(partyList);
        loadGameFrame = new LoadGameFrame(colPanel);
    }

    private void finished() {
        loadGameFrame.closeWindow();
    }

    private void selectGame() {
        GameLoader.selectAndLoad(selectedParty, controlDesk, loadGameFrame);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        final Object source = e.getSource();

        if(source.equals(buttonPanel.get("Select Game"))) {
            selectGame();
        }

        if (source.equals(buttonPanel.get("Exit"))) {
            finished();
        }
    }

    @Override
    public void valueChanged(ListSelectionEvent e) {
        final Object source = e.getSource();

        if (source.equals(gamesPanel.getList())) {
            selectedParty =
                    ((String) ((JList) source).getSelectedValue());
        }
    }
}