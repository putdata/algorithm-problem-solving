import java.util.*;
import java.io.*;

public class Main {

    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
        int[] dp = new int[100002];
        for (int i = 0; i < n; i++) {
            int k = Integer.parseInt(in.readLine());
            while (k-- > 0) {
                st = new StringTokenizer(in.readLine());
                int x = Integer.parseInt(st.nextToken()), y = Integer.parseInt(st.nextToken());
                dp[x]++;
                dp[y]--;
            }
        }
        long[] psum = new long[100002];
        long cnt = 0;
        for (int i = 0; i <= 100000; i++) {
            cnt += dp[i];
            psum[i] = (i > 0 ? psum[i - 1] : 0) + cnt;
        }
        long ans = psum[m - 1];
        int mn = m;
        for (int i = m; i <= 100000; i++) {
            if (psum[i] - psum[i - m] > ans) {
                ans = psum[i] - psum[i - m];
                mn = i + 1;
            }
        }
        out.println(mn - m + " " + mn);
        out.close();
    }
}