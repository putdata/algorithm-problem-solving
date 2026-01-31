import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int n = Integer.parseInt(in.readLine());
        String base = in.readLine();
        int asterPos = base.indexOf('*');
        String prefix = base.substring(0, asterPos);
        String suffix = base.substring(asterPos + 1);
        for (int i = 0; i < n; i++) {
            String t = in.readLine();
            if (t.length() < base.length() - 1) {
                out.println("NE");
                continue;
            }
            String pret = t.substring(0, prefix.length());
            String suft = t.substring(t.length() - suffix.length());
            if (prefix.equals(pret) && suffix.equals(suft)) {
                out.println("DA");
            } else {
                out.println("NE");
            }
        }
        out.close();
    }
}