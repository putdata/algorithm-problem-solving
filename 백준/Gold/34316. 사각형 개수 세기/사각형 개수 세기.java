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
        int n = nextInt(), m = nextInt();
        int[][] arr = n > m ? new int[m][n] : new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (n > m) arr[j][i] = nextInt();
                else arr[i][j] = nextInt();
            }
        }
        if (n > m) {
            int t = n;
            n = m;
            m = t;
        }
        int[] cnt = new int[19];
        long ans = 0;
        for (int x1 = 0; x1 < n; x1++) {
            for (int x2 = x1 + 1; x2 < n; x2++) {
                Arrays.fill(cnt, 0);
                for (int y = 0; y < m; y++) {
                    cnt[arr[x1][y] + arr[x2][y]]++;
                }
                ans += (long)cnt[10] * (cnt[10] - 1) / 2; // nC2
                for (int i = 2; i < 10; i++) ans += (long)cnt[i] * cnt[20 - i];
            }
        }
        out.println(ans);
        out.close();
    }
}