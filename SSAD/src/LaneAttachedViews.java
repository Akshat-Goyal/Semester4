public class LaneAttachedViews {
    PinSetterView psv;
    LaneView lv;
    boolean psShowing;
    boolean laneShowing;

    public LaneAttachedViews (int laneNum, Lane lane) {
        laneShowing = false;
        psShowing = false;

        psv = new PinSetterView(laneNum);
        Pinsetter ps = lane.getPinsetter();
        ps.subscribe(psv);

        lv = new LaneView(lane, laneNum);
        lane.subscribe(lv);
    }

    public boolean togglePinsetterView () {
        if(!psShowing) {
            psv.show();
        }
        else {
            psv.hide();
        }
        psShowing = !psShowing;
        return psShowing;
    }

    public boolean toggeLaneView () {
        if (!laneShowing) {
            lv.show();
        }
        else  {
            lv.hide();
        }
        laneShowing = !laneShowing;
        return laneShowing;
    }

}
