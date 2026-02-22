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
        int n =  nextInt(), k = nextInt(), m = nextInt();
        List<List<Integer>> list = new ArrayList<>();
        for (int i = 0; i <= n; i++) list.add(new ArrayList<>());
        int[][] v = new int[m + 1][k];
        for (int i = 1; i <= m; i++) {
            for (int j = 0; j < k; j++) {
                v[i][j] = nextInt();
                list.get(v[i][j]).add(i);
            }
        }
        Queue<int[]> q = new ArrayDeque<>();
        boolean[] vis = new boolean[n + 1];
        q.add(new int[]{1, 1});
        vis[1] = true;
        int ans = -1;
        while (!q.isEmpty()) {
            int[] cur = q.poll();
            if (cur[0] == n) {
                ans = cur[1];
                break;
            }
            for (int l : list.get(cur[0])) {
                for (int i = 0; i < k; i++) {
                    int next = v[l][i];
                    if (vis[next]) continue;
                    q.add(new int[]{next, cur[1] + 1});
                    vis[next] = true;
                }
            }
        }
        out.println(ans);
        out.close();
    }
}