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
        List<List<Integer>> edge = new ArrayList<>();
        boolean[] subway = new boolean[n + 1];
        int[] cnt = new int[n + 1];
        for (int i = 0; i <= n; i++) edge.add(new ArrayList<>());
        for (int i = 0; i < m; i++) {
            int x = nextInt(), y = nextInt();
            edge.get(x).add(y);
            edge.get(y).add(x);
        }
        while (q-- > 0) {
            int op = nextInt(), v = nextInt();
            if (op == 1) {
                if (subway[v]) continue;
                subway[v] = true;
                for (int next : edge.get(v)) {
                    cnt[next]++;
                }
            } else {
                out.println(cnt[v]);
            }
        }
        out.close();
    }
}