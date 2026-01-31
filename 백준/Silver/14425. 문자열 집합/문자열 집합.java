import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    static class Pair {
        int x = 0;
        int y;

        Pair(int y) {
            this.y = y;
        }
    }

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
        Set<String> set = new HashSet<>();
        for (int i = 0; i < n; i++) {
            String s = in.readLine();
            set.add(s);
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
            String s = in.readLine();
            ans += set.contains(s) ? 1 : 0;
        }
        out.println(ans);
        out.close();
    }
}