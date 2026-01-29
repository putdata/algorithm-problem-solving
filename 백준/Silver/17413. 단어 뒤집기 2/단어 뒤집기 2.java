import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        String s = in.readLine();
        boolean tag = false;
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '<') {
                if (!sb.isEmpty()) {
                    sb.reverse();
                    out.print(sb);
                    sb = new StringBuilder();
                }
                sb.append(c);
                tag = true;
            } else if (c == '>') {
                tag = false;
                sb.append(c);
                out.print(sb);
                sb = new StringBuilder();
            } else if (c == ' ') {
                if (tag) sb.append(' ');
                else {
                    sb.reverse();
                    out.print(sb + " ");
                    sb = new StringBuilder();
                }
            } else sb.append(c);
        }
        if (!sb.isEmpty()) {
            sb.reverse();
            out.print(sb);
        }
        out.close();
    }
}