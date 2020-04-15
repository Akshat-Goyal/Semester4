/**
 * 
 * SMTP implementation based on code by R�al Gagnon mailto:real@rgagnon.com
 * 
 */


import java.io.*;
import java.util.Vector;
import java.util.Iterator;
import java.net.*;
import java.awt.print.*;

public class ScoreReport {

	private final String content;
	
	public ScoreReport( Bowler bowler, int[] scores, int games ) {
		String nick = bowler.getNickName();
		String full = bowler.getFullName();
		Vector<Score> v = null;
		try{
			v = ScoreHistoryFile.getScores(nick);
		} catch (Exception e){System.err.println("Error: " + e);}
		
		Iterator<Score> scoreIt = v.iterator();


		StringBuilder sb = new StringBuilder();

		sb.append("--Lucky Strike Bowling Alley Score Report--\n");
		sb.append("\nReport for ").append(full).append(", aka \"").append(nick).append("\":\n");
		sb.append("\nFinal scores for this session: ");
		sb.append(scores[0]);
		for (int i = 1; i < games; i++){
			sb.append(", ").append(scores[i]);
		}
		sb.append("\n\n\nPrevious scores by date: \n");
		while (scoreIt.hasNext()){
			Score score = scoreIt.next();
			sb.append("  ").append(score.getDate()).append(" - ").append(score.getScore());
			sb.append("\n");
		}
		sb.append("\n\nThank you for your continuing patronage.");

		content = sb.toString();
	}

	public void sendEmail(String recipient) {
		try {
			Socket s = new Socket("osfmail.rit.edu", 25);
			BufferedReader in =
				new BufferedReader(
					new InputStreamReader(s.getInputStream(), "8859_1"));
			BufferedWriter out =
				new BufferedWriter(
					new OutputStreamWriter(s.getOutputStream(), "8859_1"));

			String boundary = "DataSeparatorString";

			// here you are supposed to send your username
			sendln(in, out, "HELO world");
			sendln(in, out, "MAIL FROM: <mda2376@rit.edu>");
			sendln(in, out, "RCPT TO: <" + recipient + ">");
			sendln(in, out, "DATA");
			sendln(out, "Subject: Bowling Score Report ");
			sendln(out, "From: <Lucky Strikes Bowling Club>");

			sendln(out, "Content-Type: text/plain; charset=\"us-ascii\"\r\n");
			sendln(out, content + "\n\n");
			sendln(out, "\r\n");

			sendln(in, out, ".");
			sendln(in, out, "QUIT");
			s.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void sendPrintout() {
		PrinterJob job = PrinterJob.getPrinterJob();

		PrintableText printobj = new PrintableText(content);

		job.setPrintable(printobj);

		if (job.printDialog()) {
			try {
				job.print();
			} catch (PrinterException e) {
				System.out.println(e.getMessage());
			}
		}

	}

	public void sendln(BufferedReader in, BufferedWriter out, String s) {
		try {
			out.write(s + "\r\n");
			out.flush();
			// System.out.println(s);
			s = in.readLine();
			// System.out.println(s);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void sendln(BufferedWriter out, String s) {
		try {
			out.write(s + "\r\n");
			out.flush();
			System.out.println(s);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}


}
