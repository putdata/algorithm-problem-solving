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

    public static long key(int a, int b) {
        return ((long)a << 32) | (long)b;
    }

    public static void main(String[] args) throws Exception {
        int n = nextInt(), m = nextInt();
        Set<Long> set = new HashSet<>();
        int[] cnt = new int[n + 1];
        for (int i = 0; i < m; i++) {
            int x = nextInt(), y = nextInt();
            long k = key(y, x);
            if (set.contains(k)) {
                cnt[x]--;
                set.remove(k);
            } else {
                cnt[y]++;
                set.add(key(x, y));
            }
        }
        int mx = 0, v = 1;
        for (int i = 1; i <= n; i++) if (mx < cnt[i]) {
            mx = cnt[i];
            v = i;
        }
        out.println(v + " " + mx);
        out.close();
    }
}