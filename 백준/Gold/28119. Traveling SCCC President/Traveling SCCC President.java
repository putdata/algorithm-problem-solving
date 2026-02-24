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

    static int[] p = new int[5001];

    public static int find(int x) {
        if (p[x] == x) return x;
        return p[x] = find(p[x]);
    }

    public static void merge(int x, int y) {
        x = find(x); y =  find(y);
        p[y] = x;
    }

    public static void main(String[] args) throws Exception {
        int n = nextInt(), m = nextInt(), st =  nextInt();
        List<int[]> edge = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            int x = nextInt(), y = nextInt(), z = nextInt();
            edge.add(new int[]{z, x, y});
        }
        for (int i = 1; i <= n; i++) {
            nextInt();
            p[i] = i;
        }
        edge.sort(Arrays::compare);
        int ans = 0;
        for (int[] e : edge) {
            if (find(e[1]) == find(e[2])) continue;
            ans += e[0];
            merge(e[1], e[2]);
        }
        out.println(ans);
        out.close();
    }
}