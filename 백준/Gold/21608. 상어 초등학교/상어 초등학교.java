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
        int n = Integer.parseInt(in.readLine());
        int[][] like = new int[401][401];
        int[] arr = new int[n * n + 1];
        for (int i = 1; i <= n * n; i++) {
            st = new StringTokenizer(in.readLine());
            arr[i] = nextInt();
            for (int j = 0; j < 4; j++) {
                int x = nextInt();
                like[arr[i]][x] = 10000;
            }
        }
        int[][] board = new int[21][21];
        int[] dx = {1, -1, 0, 0}, dy = {0, 0, 1, -1};
        for (int cur = 1; cur <= n * n; cur++) {
            int stu = arr[cur];
            int best = -1, px = 0, py = 0;
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) if (board[i][j] == 0) {
                    int score =  20 * (n - i) + (n - j);
                    for (int k = 0; k < 4; k++) {
                        int nx = i + dx[k], ny = j + dy[k];
                        if (nx < 1 || nx > n || ny < 1 || ny > n) continue;
                        if (board[nx][ny] == 0) score += 1000;
                        else score += like[stu][board[nx][ny]];
                    }
                    if (score > best) {
                        best = score;
                        px = i;
                        py = j;
                    }
                }
            }
            board[px][py] = stu;
        }
        // 만족도 합 구하기
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int score = 0;
                for (int k = 0; k < 4; k++) {
                    int nx = i + dx[k], ny = j + dy[k];
                    if (nx < 1 || nx > n || ny < 1 || ny > n) continue;
                    if (like[board[i][j]][board[nx][ny]] > 0) {
                        if (score > 0) score *= 10;
                        else score = 1;
                    }
                }
                ans += score;
            }
        }
        out.println(ans);
        out.close();
    }
}