/**
 *
 * To change this generated comment edit the template variable "typecomment":
 * Window>Preferences>Java>Templates.
 * To enable and disable the creation of type comments go to
 * Window>Preferences>Java>Code Generation.
 */

public class Score {

    private final String nick;
    private final String date;
    private final String score;

    public Score( String nick, String date, String score ) {
		this.nick=nick;
		this.date=date;
		this.score=score;
    }

    public String getNickName() {
        return nick;  
    }

	public String getDate() {
		return date;
	}
	
	public String getScore() {
		return score;
	}

	public String toString() {
		return nick + "\t" + date + "\t" + score;
	}

}
