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

    static int[] p;

    static int find(int x) {
        if (p[x] == x) return x;
        return p[x] = find(p[x]);
    }

    static void union(int x, int y) {
        x = find(x); y = find(y);
        p[y] = x;
    }

    public static void main(String[] args) throws Exception {
        int n = nextInt();
        p = new int[n];
        for (int i = 0; i < n; i++) p[i] = i;
        List<int[]> list = new ArrayList<>();
        List<int[]> edge = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int x = nextInt(), y = nextInt();
            for (int j = 0; j < i; j++) {
                int[] v = list.get(j);
                int dist = (x - v[0]) * (x - v[0]) + (y - v[1]) * (y - v[1]);
                edge.add(new int[]{dist, i, j});
            }
            list.add(new int[]{x, y});
        }
        edge.sort(Arrays::compare);
        int cnt = 0, ans = 0;
        for (int[] e : edge) {
            if (find(e[1]) == find(e[2])) continue;
            ans = Math.max(ans, e[0]);
            union(e[1], e[2]);
            if (++cnt == n - 1) break;
        }
        out.println(ans);
        out.close();
    }
}