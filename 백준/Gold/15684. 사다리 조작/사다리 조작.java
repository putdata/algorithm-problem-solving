import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() {
        return Integer.parseInt(st.nextToken());
    }

    static int N, M, H;

    // 현재 사다리 번호, 행 번호 -> 다음 사다리 번호
    static int[][] move = new int[31][31];

    public static boolean check() {
        for (int i = 1; i <= N; i++) {
            int cur = i;
            for (int j = 1; j <= H; j++) {
                if (move[cur][j] > 0) cur = move[cur][j];
            }
            if (cur != i) return false;
        }
        return true;
    }

    public static boolean can(int x, int y) {
        return move[x][y] == 0 && move[x + 1][y] == 0;
    }

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        N = nextInt(); M = nextInt(); H = nextInt();
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(in.readLine());
            int x = nextInt(), y = nextInt();
            move[y][x] = y + 1;
            move[y + 1][x] = y;
        }
        int ans = (int) 1e9;
        if (check()) {
            ans = 0;
        } else {
            last:
            for (int i = 0; i < (N - 1) * H; i++) {
                int x1 = i % (N - 1) + 1, y1 = i / (N - 1) + 1;
                if (!can(x1, y1)) continue;
                move[x1][y1] = x1 + 1;
                move[x1 + 1][y1] = x1;
                if (check()) {
                    ans = 1;
                    break last;
                }
                for (int j = i + 1; j < (N - 1) * H; j++) {
                    int x2 = j % (N - 1) + 1, y2 = j / (N - 1) + 1;
                    if (!can(x2, y2)) continue;
                    move[x2][y2] = x2 + 1;
                    move[x2 + 1][y2] = x2;
                    if (check()) ans = 2;
                    for (int k = j + 1; k < (N - 1) * H; k++) {
                        int x3 = k % (N - 1) + 1, y3 = k / (N - 1) + 1;
                        if (!can(x3, y3)) continue;
                        move[x3][y3] = x3 + 1;
                        move[x3 + 1][y3] = x3;
                        if (check()) ans = Math.min(ans, 3);
                        move[x3][y3] = 0;
                        move[x3 + 1][y3] = 0;
                    }
                    move[x2][y2] = 0;
                    move[x2 + 1][y2] = 0;
                }
                move[x1][y1] = 0;
                move[x1 + 1][y1] = 0;
            }
        }
        out.print(ans == (int)1e9 ? -1 : ans);
        out.close();
    }
}