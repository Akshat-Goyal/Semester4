/**
 *
 * To change this generated comment edit the template variable "typecomment":
 * Window>Preferences>Java>Templates.
 * To enable and disable the creation of type comments go to
 * Window>Preferences>Java>Code Generation.
 */

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LaneStatusView implements ActionListener, LaneObserver, PinsetterObserver {

	private final LaneStatusButtonPanel laneStatusButtonPanel;
	public final Panel panel;

	private final Lane lane;

	private LaneAttachedViews lav;
	private LaneStatusLabelManager laneStatusLabelManager;

	public LaneStatusView(Lane lane, int laneNum) {

		this.lane = lane;

        lav = new LaneAttachedViews(laneNum, lane);

		laneStatusButtonPanel = new LaneStatusButtonPanel("", this);

		panel = new Panel("");
		laneStatusLabelManager = new LaneStatusLabelManager(panel);
		panel.addPanel(laneStatusButtonPanel.getPanel());

	}

	public void actionPerformed(ActionEvent e) {
		if(lane.isPartyAssigned()) {
			final Object source = e.getSource();

			if(source.equals(laneStatusButtonPanel.get("Pinsetter"))) {
				lav.togglePinsetterView();
			}
			else if(source.equals(laneStatusButtonPanel.get("View Lane"))) {
				lav.toggeLaneView();
			}
			else if(source.equals(laneStatusButtonPanel.get("     "))){
				LaneRunningStatus laneRunningStatus = new LaneRunningStatus(lane);
				laneRunningStatus.unPauseGame();
				laneStatusButtonPanel.setGreen();
			}
			else if(source.equals(laneStatusButtonPanel.get("Pause and Save"))) {
				setLaneStatus("pause");
			}
			else if(source.equals(laneStatusButtonPanel.get("Resume"))) {
				setLaneStatus("resume");
			}
		}
	}

	private void setLaneStatus (String pauseOrResume) {
		LaneRunningStatus runningStatus = new LaneRunningStatus(lane);
		LaneCurrentState state = lane.getCurrentState();
		if (pauseOrResume == "pause") {
			runningStatus.pause(state);
			laneStatusButtonPanel.pause();
		} else {
			runningStatus.resume(state);
			laneStatusButtonPanel.resume();
		}
	}

	public void receiveLaneEvent(LaneEvent le) {
		laneStatusLabelManager.changeBowler(le.getBowler().getNickName());
        laneStatusButtonPanel.actOnLaneEvent(le.isMechanicalProblem(), lane.isPartyAssigned(), lane.gameIsPaused);
	}

	public void receivePinsetterEvent(PinsetterEvent pe) {
		laneStatusLabelManager.changePinsDown((Integer.valueOf(pe.totalPinsDown())).toString());
	}

}
