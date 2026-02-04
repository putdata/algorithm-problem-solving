import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() {
        return Integer.parseInt(st.nextToken());
    }

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        int n = nextInt(), m = nextInt(), p = nextInt();
        String[] s = new String[n];
        List<int[]> pos = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            s[i] = in.readLine();
            for (int j = 0; j < m; j++) {
                if ('a' <= s[i].charAt(j) && s[i].charAt(j) <= 'z') {
                    pos.add(new int[]{i, j});
                }
            }
        }
        int[] w = new int[30];
        for (int i = 0; i < p; i++) {
            st = new StringTokenizer(in.readLine());
            char a = st.nextToken().charAt(0);
            int x = nextInt();
            w[a - 'a'] += x;
        }
        int[] dx = {1, -1, 0, 0}, dy = {0, 0, 1, -1};
        int[] dp = new int[3_000_000];
        List<Integer> list = new ArrayList<>();
        for (int[] xy : pos) {
            boolean[][] vis = new boolean[n][m];
            Queue<int[]> q = new ArrayDeque<>();
            q.add(new int[]{xy[0], xy[1], 0});
            vis[xy[0]][xy[1]] = true;
            outer:
            while (!q.isEmpty()) {
                int[] cur = q.poll();
                for (int i = 0; i < 4; i++) {
                    int nx = cur[0] + dx[i], ny = cur[1] + dy[i];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m || vis[nx][ny] || s[nx].charAt(ny) == 'X') continue;
                    vis[nx][ny] = true;
                    if (s[nx].charAt(ny) == 'B') {
                        dp[cur[2] + 1] += w[s[xy[0]].charAt(xy[1]) - 'a'];
                        list.add(cur[2] + 1);
                        break outer;
                    }
                    q.add(new int[]{nx, ny, cur[2] + 1});
                }
            }
        }
        list.sort(null);
        for (int i = 1; i < 3_000_000; i++) dp[i] += dp[i - 1];
        int hp = Integer.parseInt(in.readLine());
        int time = 1;
        while (hp > 0) {
            hp -= dp[time++];
        }
        int ans = 0;
        for (; ans < p && list.get(ans) < time; ans++);
        out.println(ans);
        out.close();
    }
}