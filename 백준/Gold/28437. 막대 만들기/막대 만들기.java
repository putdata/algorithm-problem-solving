import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() {
        return Integer.parseInt(st.nextToken());
    }

    static final int MAX = 100_000;

    public static void main(String[] args) throws Exception {
        int n = Integer.parseInt(in.readLine());
        st = new StringTokenizer(in.readLine());
        int[] dp = new int[MAX + 1];
        for (int i = 0; i < n; i++) {
            int x = nextInt();
            dp[x] = 1;
        }
        for (int i = 2; i <= MAX; i++) {
            for (int j = 1; j * j <= i; j++) if (i % j == 0) {
                dp[i] += dp[j];
                if (j != 1 && j * j != i) dp[i] += dp[i / j];
            }
        }
        int q = Integer.parseInt(in.readLine());
        st = new StringTokenizer(in.readLine());
        while (q-- > 0) {
            out.print(dp[nextInt()] + " ");
        }
        out.close();
    }
}