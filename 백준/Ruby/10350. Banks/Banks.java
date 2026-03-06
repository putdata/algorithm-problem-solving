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
        long[] p = new long[n + 1];
        for (int i = 1; i <= n; i++) {
            int x = nextInt();
            p[i] = p[i - 1] + x;
        }
        long ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                long diff = p[i] - p[j];
                if (diff <= 0) continue;
                long cnt = (diff + p[n] - 1) / p[n];
                if (i > j) cnt--;
                ans += Math.max(0, cnt);
            }
        }
        out.println(ans);
        out.close();
    }
}