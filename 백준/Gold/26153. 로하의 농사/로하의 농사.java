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

    static int n, m;
    static int[][] arr;
    static boolean[][] vis;
    static int p, ans;
    static int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

    static void dfs(int x, int y, int tot, int used, int prev) {
        if (tot > ans) {
            ans = tot;
        }
        if (used >= p) return;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || vis[nx][ny]) continue;
            vis[nx][ny] = true;
            int val = tot + arr[nx][ny];
            if (i == prev || (i ^ 1) == prev) dfs(nx, ny, val, used + 1, i);
            else if (used + 2 <= p) dfs(nx, ny, val, used + 2, i);
            vis[nx][ny] = false;
        }
    }

    public static void main(String[] args) throws Exception {
        n = nextInt(); m = nextInt();
        arr = new int[n][m];
        vis = new boolean[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                arr[i][j] = nextInt();
        int sx = nextInt(), sy = nextInt();
        p = nextInt() + 1;
        vis[sx][sy] = true;
        dfs(sx, sy, arr[sx][sy], 0, -1);
        out.println(ans);
        out.close();
    }
}