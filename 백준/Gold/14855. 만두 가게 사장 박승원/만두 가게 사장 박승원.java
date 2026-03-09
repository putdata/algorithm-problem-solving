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
        int n = nextInt(), m = nextInt(), c = nextInt(), d = nextInt();
        int[] dp = new int[2000];
        for (int i = 0; i < m; i++) {
            int a = nextInt(), b = nextInt(), ci = nextInt(), di = nextInt();
            for (int j = 1; j <= a / b; j++) {
                for (int k = n; k >= ci; k--) if (dp[k - ci] > 0) {
                    dp[k] = Math.max(dp[k], dp[k - ci] + di);
                }
                dp[ci] = Math.max(dp[ci], di);
            }
        }
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            ans = Math.max(ans, dp[i] + (n - i) / c * d);
        }
        out.println(ans);
        out.close();
    }
}