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
        int n = nextInt();
        long[] v1 = new long[n], v2 = new long[n];
        long sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++) {
            v1[i] = nextInt();
            sum1 += v1[i];
        }
        for (int i = 0; i < n; i++) {
            v2[i] = nextInt();
            sum2 += v2[i];
        }
        Arrays.sort(v1); Arrays.sort(v2);
        long mn = Long.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            int l = 0, r = n;
            long diff = v1[i] - (sum1 - sum2) / 2;
            while (l + 1 < r) {
                int mid = (l + r) / 2;
                if (v2[mid] < diff) l = mid;
                else r = mid;
            }
            mn = Math.min(mn, Math.abs((sum1 - sum2) - (v1[i] - v2[l]) * 2));
            if (l >= 1) mn = Math.min(mn, Math.abs((sum1 - sum2) - (v1[i] - v2[l - 1]) * 2));
            if (l < n - 1) mn = Math.min(mn, Math.abs((sum1 - sum2) - (v1[i] - v2[l + 1]) * 2));
        }
        out.println(mn);
        out.close();
    }
}