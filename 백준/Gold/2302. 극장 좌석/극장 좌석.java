import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() {
        return Integer.parseInt(st.nextToken());
    }

    public static void main(String[] args) throws Exception {
        int n = Integer.parseInt(in.readLine());
        int m = Integer.parseInt(in.readLine());
        int[] vip = new int[m];
        for (int i = 0; i < m; i++) vip[i] = Integer.parseInt(in.readLine());
        int[] dp = new int[50];
        dp[0] = dp[1] = 1;
        for (int i = 2; i <= 40; i++) dp[i] = dp[i - 1] + dp[i - 2];
        int ans = 1, prev = 0;
        for (int i = 0; i < m; i++) {
            ans *= dp[vip[i] - prev - 1];
            prev = vip[i];
        }
        ans *= dp[n - prev];
        out.println(ans);
        out.close();
    }
}