import javax.swing.*;
import javax.swing.event.ListSelectionListener;
import java.util.Vector;

public class ScrollPanel<T> extends Panel {

    private JList<T> typeList;

    public ScrollPanel(String title, Vector<? extends T> type, int fixedCellWidth, int visibleRowCount, boolean verticalScrollBarAlways) {
        super(title);
        typeList = new JList <>(type);
        typeList.setFixedCellWidth(fixedCellWidth);
		typeList.setVisibleRowCount(visibleRowCount);
		JScrollPane typePane = new JScrollPane(typeList);

		if(verticalScrollBarAlways) {
		    typePane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_ALWAYS);
        }
		panel.add(typePane);
    }


    public ScrollPanel(String title, Vector<T> type, int fixedCellWidth, int visibleRowCount, boolean verticalScrollBarAlways, ListSelectionListener listener) {
        this(title,
            type,
            fixedCellWidth,
            visibleRowCount,
            verticalScrollBarAlways);
        typeList.addListSelectionListener(listener);
    }

    public void setListData(Vector<? extends T> type) {
        typeList.setListData(type);
    }

    public JList getList() {
        return typeList;
    }

    public JPanel getPanel() {
        return this.panel;
    }
}
