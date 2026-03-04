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

    static long MOD = (int) 1e9 + 7;

    public static void main(String[] args) throws Exception {
        long[] dp = new long[(int) 1e7 + 1];
        dp[1] = 5; dp[2] = 20;
        for (int i = 3; i <= 10_000_000; i++) {
            dp[i] = (5 * dp[i - 1]) % MOD;
        }
        int q = nextInt();
        while (q-- > 0) {
            int x = nextInt();
            out.println(dp[x]);
        }
        out.close();
    }
}