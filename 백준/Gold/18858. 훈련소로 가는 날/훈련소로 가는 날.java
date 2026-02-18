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

    static final int MOD = 998_244_353;

    public static void main(String[] args) throws Exception {
        int n = nextInt(), m = nextInt();
        int[][][] dp = new int[n + 1][m + 1][2]; // 마지막 숫자가 m으로 끝나는 경우
        // 0 -> 내려가거나 유지
        // 1 -> 바로 전이 상승
        for (int i = 1; i <= m; i++) dp[1][i][0] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                for (int k = 1; k <= m; k++) {
                    // 내려가다가 상승 -> 골짜기 모양
                    if (k > j) dp[i][k][1] = (dp[i][k][1] + dp[i - 1][j][0]) % MOD;
                    // 내려가는 모양
                    else dp[i][k][0] = (dp[i][k][0] + dp[i - 1][j][0]) % MOD;

                    // 계속 상승
                    if (k > j) dp[i][k][1] = (dp[i][k][1] + dp[i - 1][j][1]) % MOD;
                    // 바로 전과 지금이 같아 하강 가능
                    else if (k == j) dp[i][k][0] = (dp[i][k][0] + dp[i - 1][j][1]) % MOD;
                }
            }
        }
        long ans = 0;
        for (int i = 1; i <= m; i++) {
            ans = (ans + dp[n][i][0] + dp[n][i][1]) % MOD;
        }
        out.println(ans);
        out.close();
    }
}