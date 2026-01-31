import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        String s;
        boolean[] aeiou = new boolean[300];
        aeiou['a'] = aeiou['e'] = aeiou['i'] = aeiou['o'] = aeiou['u'] = true;
        while (true) {
            s = in.readLine();
            if (s.equals("end")) break;
            int cnt = 0, stack = 0;
            boolean flag = true;
            for (int i = 0; i < s.length(); i++) {
                char c = s.charAt(i), p = i > 0 ? s.charAt(i - 1) : '.';
                if (aeiou[c]) cnt++;
                if (aeiou[c] == aeiou[p]) {
                    if (++stack == 3) {
                        flag = false;
                        break;
                    }
                } else {
                    stack = 1;
                }
                if (c == p && c != 'e' && c != 'o') {
                    flag = false;
                    break;
                }
            }
            if (cnt == 0) flag = false;
            out.println("<" + s + "> is " + (flag ? "" : "not ") + "acceptable.");
        }
        out.close();
    }
}