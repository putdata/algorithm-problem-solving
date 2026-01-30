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
        int N = nextInt(), L = nextInt(), R = nextInt();
        int[][] arr = new int[N][N];
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(in.readLine());
            for (int j = 0; j < N; j++) {
                arr[i][j] = nextInt();
            }
        }
        int[] dx = {1, -1 ,0, 0}, dy = {0, 0, 1, -1};
        int ans = 0;
        while (true) {
            boolean moved = false;
            boolean[][] vis = new boolean[N + 1][N + 1];
            List<Integer> sumList = new ArrayList<>();
            List<List<int[]>> unionList = new ArrayList<>();
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) if (!vis[i][j]) {
                    ArrayDeque<int[]> q = new ArrayDeque<>();
                    List<int[]> union = new ArrayList<>();
                    int sum = arr[i][j];
                    union.add(new int[]{i, j});
                    q.add(new int[]{i, j});
                    vis[i][j] = true;
                    while (!q.isEmpty()) {
                        int[] cur = q.poll();
                        for (int k = 0; k < 4; k++) {
                            int nx = cur[0] + dx[k], ny = cur[1] + dy[k];
                            if (nx < 0 || nx >= N || ny < 0 || ny >= N || vis[nx][ny]) continue;
                            int diff = Math.abs(arr[cur[0]][cur[1]] - arr[nx][ny]);
                            if (L <= diff && diff <= R) {
                                vis[nx][ny] = true;
                                union.add(new int[]{nx, ny});
                                q.add(new int[]{nx, ny});
                                sum += arr[nx][ny];
                            }
                        }
                    }
                    if (union.size() > 1) {
                        sumList.add(sum);
                        unionList.add(union);
                    }
                }
            }
            if (sumList.isEmpty()) break;
            for (int i = 0; i < sumList.size(); i++) {
                List<int[]> union = unionList.get(i);
                for (int[] xy : union) {
                    arr[xy[0]][xy[1]] = sumList.get(i) / union.size();
                }
            }
            ans++;
        }
        out.print(ans);
        out.close();
    }
}