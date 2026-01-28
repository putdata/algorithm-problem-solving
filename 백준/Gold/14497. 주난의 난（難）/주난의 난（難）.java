import java.util.*;
import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int x1 = Integer.parseInt(st.nextToken()) - 1, y1 = Integer.parseInt(st.nextToken()) - 1;
        int x2 = Integer.parseInt(st.nextToken()) - 1, y2 = Integer.parseInt(st.nextToken()) - 1;
        byte[][] arr = new byte[n][m];
        for (int i = 0; i < n; i++) {
            arr[i] = br.readLine().getBytes();
        }
        int[] dx = {-1, 0, 1, 0}, dy = {0, -1, 0, 1};
        for (int step = 1;; step++) {
            ArrayDeque<int[]> q = new ArrayDeque<>();
            ArrayDeque<int[]> del = new ArrayDeque<>();
            boolean[][] vis = new boolean[n][m];
            q.add(new int[]{x1, y1});
            while (!q.isEmpty()) {
                int[] cur = q.poll();
                for (int i = 0; i < 4; i++) {
                    int nx = cur[0] + dx[i], ny = cur[1] + dy[i];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m || vis[nx][ny]) continue;
                    if (nx == x2 && ny == y2) {
                        bw.write(step + "");
                        br.close();
                        bw.close();
                        return;
                    } else if (arr[nx][ny] == '1') {
                        del.push(new int[]{nx, ny});
                    } else {
                        q.push(new int[]{nx, ny});
                    }
                    vis[nx][ny] = true;
                }
            }
            while (!del.isEmpty()) {
                int[] cur = del.poll();
                arr[cur[0]][cur[1]] = '0';
            }
        }
    }
}