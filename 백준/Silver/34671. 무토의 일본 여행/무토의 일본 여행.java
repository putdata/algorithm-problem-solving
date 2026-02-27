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
        int n = nextInt(), m = nextInt(), q = nextInt();
        TreeSet<int[]> set = new TreeSet<>(Arrays::compare);
        for (int i = 0; i < m; i++) {
            int x = nextInt(), y = nextInt(), z = nextInt();
            if (x > y) {
                int tmp = x;
                x = y;
                y = tmp;
            }
            set.add(new int[]{x, y, z});
        }
        for (int i = 0; i < q; i++) {
            int x = nextInt(), y = nextInt();
            if (x > y) {
                int tmp = x;
                x = y;
                y = tmp;
            }
            int[] v = set.ceiling(new int[]{x, y, -1});
            if (v == null) v = new int[]{-1, -1, -1};
            if (v[0] == x && v[1] == y) out.println(v[2]);
            else out.println(-1);
        }
        out.close();
    }
}