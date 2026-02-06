import java.math.BigInteger;
import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() throws IOException {
        if (st == null || !st.hasMoreTokens()) st = new StringTokenizer(in.readLine());
        return Integer.parseInt(st.nextToken());
    }

    public static void main(String[] args) throws Exception {
        // 수열 길이 x일 때, 비트쌍 k개이면서 마지막 비트가 0인지 1인지의 개수
        int[][][] dp = new int[200][200][2];
        dp[1][0][0] = dp[1][0][1] = 1;
        for (int i = 2; i <= 100; i++) {
            for (int j = 0; j < i; j++) {
                dp[i][j][0] = dp[i - 1][j][0] + dp[i - 1][j][1];
                dp[i][j][1] = dp[i - 1][j][0];
                if (j > 0) dp[i][j][1] += dp[i - 1][j - 1][1];
            }
        }
        int t = nextInt();
        while (t-- > 0) {
            int x = nextInt(), y = nextInt();
            out.println(dp[x][y][0] + dp[x][y][1]);
        }
        out.close();
    }
}