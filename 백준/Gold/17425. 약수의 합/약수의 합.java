import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    static final int MAX = 1_000_000;

    static int[] isPrime = new int[MAX + 1];

    public static void main(String[] args) throws Exception {
        long[] f = new long[MAX + 1];
        for (int i = 1; i <= MAX; i++) {
            for (int j = i; j <= MAX; j += i) f[j] += i;
        }
        long[] dp = new long[MAX + 1];
        for (int i = 1; i <= MAX; i++) dp[i] = dp[i - 1] + f[i];
        int t = Integer.parseInt(in.readLine());
        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            int x = Integer.parseInt(in.readLine());
            sb.append(dp[x] + "\n");
        }
        out.print(sb);
        out.close();
    }
}