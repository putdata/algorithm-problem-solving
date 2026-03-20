import java.io.*;
import java.util.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() throws IOException {
        if (st == null || !st.hasMoreTokens()) st = new StringTokenizer(in.readLine());
        return Integer.parseInt(st.nextToken());
    }

    public static void main(String[] args) throws Exception {
        String s = in.readLine();
        int n = nextInt();

        String ans = null;
        int bestG = 0;
        int bestCnt = 1;

        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(in.readLine());
            String w = st.nextToken();
            int g = Integer.parseInt(st.nextToken());

            int cur = 0;
            for (int j = 0; j < w.length(); j++) {
                if (cur < s.length() && w.charAt(j) == s.charAt(cur)) {
                    cur++;
                }
            }

            if (cur == s.length()) {
                int cnt = w.length() - s.length();

                if (ans == null || (long) g * bestCnt > (long) bestG * cnt) {
                    ans = w;
                    bestG = g;
                    bestCnt = cnt;
                }
            }
        }

        out.println(ans == null ? "No Jam" : ans);
        out.close();
    }
}