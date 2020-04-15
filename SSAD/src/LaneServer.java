public interface LaneServer extends java.rmi.Remote {
	void subscribe(LaneObserver toAdd) throws java.rmi.RemoteException;
}

