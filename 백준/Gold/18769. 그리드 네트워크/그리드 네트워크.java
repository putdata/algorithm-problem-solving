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

    static int[] p = new int[300000];

    static int find(int x) {
        if (p[x] == x) return x;
        return p[x] = find(p[x]);
    }

    static void merge(int x, int y) {
        x = find(x); y = find(y);
        p[y] = x;
    }

    public static void main(String[] args) throws Exception {
        int t = nextInt();
        while (t-- > 0) {
            List<int[]> edge = new ArrayList<>();
            int n = nextInt(), m = nextInt();
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m - 1; j++) {
                    int w = nextInt();
                    edge.add(new int[]{w, i * m + j, i * m + j + 1});
                }
            }
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < m; j++) {
                    int w = nextInt();
                    edge.add(new int[]{w, i * m + j, (i + 1) * m + j});
                }
            }
            edge.sort(Arrays::compare);
            int cnt = 0, ans = 0;
            for (int i = 0; i <= n * m; i++) p[i] = i;
            for (int[] v : edge) {
                if (find(v[1]) == find(v[2])) continue;
                merge(v[1], v[2]);
                ans += v[0];
                if (++cnt == n * m - 1) break;
            }
            out.println(ans);
        }
        out.close();
    }
}