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
        int n = nextInt();
        int[] arr = new int[n + 1];
        for (int i = 1; i <= n; i++) arr[i] = nextInt();
        int[] dp = new int[n + 1], last = new int[101];
        last[arr[1]] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= 100; j++) if (last[j] > 0) {
                dp[i] = Math.max(dp[i], dp[last[j]] + (arr[i] - j) * (arr[i] - j));
            }
            last[arr[i]] = i;
        }
        out.println(dp[n]);
        out.close();
    }
}