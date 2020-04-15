import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Vector;

public class QueriesView implements ListSelectionListener, ActionListener {
    public JFrame win;
    private ButtonPanel overallButtonPanel, individiualButtonsPanel;
    private ScrollPanel<String> resultsPanel;
    private ScrollPanel<String> bowlersPanel;
    private QueriesHandler queriesHandler;
    private Panel queriesPanel;
    private String selectedBowler;

    public QueriesView () {

        queriesHandler = new QueriesHandler();

        win = new JFrame("Queries");
        win.getContentPane().setLayout(new BorderLayout());
        ((JPanel) win.getContentPane()).setOpaque(false);

        Panel colPanel = buildPanels();

        win.getContentPane().add("Center", colPanel.getJPanel());
        win.pack();

        Dimension screenSize = (Toolkit.getDefaultToolkit()).getScreenSize();
        WinLocation window = new WinLocation();
        window.setCentre(win, screenSize);
    }

    public Panel buildPanels () {
        Vector<String> results = new Vector<>();
//        results.add(new Bowler("anirudh", "anirdh pal", "ansk@fsc.com"));
        Vector<String> bowlers = queriesHandler.getAllBowlers();


        bowlersPanel = new ScrollPanel<>("Bowlers List", bowlers,
                120, 8, false, this);

        overallButtonPanel = new ButtonPanel("Get bowler(s) with:", 7, 1);
        overallButtonPanel.add("Highest Total", this, true);
        overallButtonPanel.add("Lowest Total", this, true);
        overallButtonPanel.add("Best Average", this, true);
        overallButtonPanel.add("Worst Average", this, true);
        overallButtonPanel.add("Most Games Played", this, true);
        overallButtonPanel.add("Least Games Played", this, true);
        overallButtonPanel.add("Finished", this, true);

        individiualButtonsPanel = new ButtonPanel("Queries for selected bowler:", 5, 1);
        individiualButtonsPanel.add("Highest Score", this, true);
        individiualButtonsPanel.add("Lowest Score", this, true);
        individiualButtonsPanel.add("Scores for Last 5 Games", this, true);

        resultsPanel = new ScrollPanel<>("Results", results,
                300, 6, false, this);

        queriesPanel = new Panel("Your query", 1, 3);
        queriesPanel.addPanel(bowlersPanel.getPanel());
        queriesPanel.addPanel(individiualButtonsPanel.getPanel());
        queriesPanel.addPanel(overallButtonPanel.getPanel());

        Panel colPanel = new Panel("", 2, 1);
        colPanel.addPanel(queriesPanel.getJPanel());
        colPanel.addPanel(resultsPanel.getPanel());

        return colPanel;
    }


    public void actionPerformed (ActionEvent e) {
        final Object source = e.getSource();

        if (source.equals(overallButtonPanel.get("Highest Total"))) {
            Vector<String> queryResults = queriesHandler.getExtremeBowlers("highest", "totalScore");
            resultsPanel.setListData(queryResults);
        } else if (source.equals(overallButtonPanel.get("Lowest Total"))) {
            Vector<String> queryResults = queriesHandler.getExtremeBowlers("lowest", "totalScore");
            resultsPanel.setListData(queryResults);
        } else if (source.equals(overallButtonPanel.get("Best Average"))) {
            Vector<String> queryResults = queriesHandler.getExtremeBowlers("highest", "averageScore");
            resultsPanel.setListData(queryResults);
        } else if (source.equals(overallButtonPanel.get("Worst Average"))) {
            Vector<String> queryResults = queriesHandler.getExtremeBowlers("lowest", "averageScore");
            resultsPanel.setListData(queryResults);
        } else if (source.equals(overallButtonPanel.get("Most Games Played"))) {
            Vector<String> queryResults = queriesHandler.getExtremeBowlers("highest", "numberOfGames");
            resultsPanel.setListData(queryResults);
        } else if (source.equals(overallButtonPanel.get("Least Games Played"))) {
            Vector<String> queryResults = queriesHandler.getExtremeBowlers("lowest", "numberOfGames");
            resultsPanel.setListData(queryResults);
        } else if (source.equals(individiualButtonsPanel.get("Highest Score"))) {
            if (selectedBowler != null) {
                Vector<String> queryResults = queriesHandler.getIndividualScore(selectedBowler, "highest");
                resultsPanel.setListData(queryResults);
            }
        } else if (source.equals(individiualButtonsPanel.get("Lowest Score"))) {
            if (selectedBowler != null) {
                Vector<String> queryResults = queriesHandler.getIndividualScore(selectedBowler, "lowest");
                resultsPanel.setListData(queryResults);
            }
        } else if (source.equals(individiualButtonsPanel.get("Scores for Last 5 Games"))) {
            if (selectedBowler != null) {
                Vector<String> queryResults = queriesHandler.getLastFiveGameScores(selectedBowler);
                resultsPanel.setListData(queryResults);
            }
        } else if (source.equals(overallButtonPanel.get("Finished"))) {
            win.setVisible(false);
        }
    }

    public void valueChanged (ListSelectionEvent e) {
        final Object source = e.getSource();
        if (source.equals(bowlersPanel.getList())) {
            selectedBowler = (String) ((JList) source).getSelectedValue();
        }
    }

}
