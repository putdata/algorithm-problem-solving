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

    static final long MOD = (long) 1e9 + 7;

    public static void main(String[] args) throws Exception {
        int n = nextInt(), m = nextInt();
        long[] edge = new long[n + 1];
        for (int i = 0; i < m; i++) {
            int x = nextInt(), y = nextInt();
            edge[x]++;
            edge[y]++;
        }
        long ans = 0;
        for (int i = 1; i <= n; i++) if (edge[i] >= 3) {
            ans = (ans + edge[i] * (edge[i] - 1) * (edge[i] - 2) / 6) % MOD;
        }
        out.println(ans);
        out.close();
    }
}