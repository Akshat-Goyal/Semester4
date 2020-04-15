/*
 * Bowler.java
 *
 * Version:
 *     $Id$
 *
 * Revisions:
 *     $Log: Bowler.java,v $
 *     Revision 1.3  2003/01/15 02:57:40  ???
 *     Added accessors and and equals() method
 *
 *     Revision 1.2  2003/01/12 22:23:32  ???
 *     *** empty log message ***
 *
 *     Revision 1.1  2003/01/12 19:09:12  ???
 *     Adding Party, Lane, Bowler, and Alley.
 *
 */

/**
 *  Class that holds all bowler info
 *
 */

public class Bowler {

    private final String fullName;
    private final String nickName;
    private final String email;

    public Bowler(final String nick, final String full, final String mail ) {
		nickName = nick;
		fullName = full;
		email = mail;
    }

	public String getFullName() {
    	return fullName;
	}
	
	public String getNickName() {
    	return nickName;
	}

	public String getEmail() {
    	return email;
	}

	private boolean checkNickName(Bowler b) {
		return nickName.equals(b.getNickName());
	}

	private boolean checkFullName(Bowler b) {
		return fullName.equals(b.getFullName());
	}

	private boolean checkEmail(Bowler b) {
		return email.equals(b.getEmail());
	}
	
	public boolean equals ( Bowler b) {
		boolean returnValue = checkNickName(b);
		returnValue &= checkFullName(b);
		returnValue &= checkEmail(b);

		return returnValue;
	}
}