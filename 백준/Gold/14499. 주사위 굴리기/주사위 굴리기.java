import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() {
        return Integer.parseInt(st.nextToken());
    }

    static int n, m;

    public static void roll(int[] dice, int op) {
        int tmp;
        if (op == 1) {
            tmp = dice[4];
            dice[4] = dice[1]; dice[1] = dice[3]; dice[3] = dice[6]; dice[6] = tmp;
        } else if (op == 2) {
            tmp = dice[6];
            dice[6] = dice[3]; dice[3] = dice[1]; dice[1] = dice[4]; dice[4] = tmp;
        } else if (op == 3) {
            tmp = dice[6];
            dice[6] = dice[5]; dice[5] = dice[1]; dice[1] = dice[2]; dice[2] = tmp;
        } else {
            tmp = dice[2];
            dice[2] = dice[1]; dice[1] = dice[5]; dice[5] = dice[6]; dice[6] = tmp;
        }
    }

    public static boolean isOk(int x, int y) {
        return 0 <= x && x < n && 0 <= y && y < m;
    }

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        n = nextInt(); m = nextInt();
        int sx = nextInt(), sy = nextInt();
        int Q = nextInt();

        int[] dice = new int[7];
        int[][] arr = new int[n][m];
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(in.readLine());
            for (int j = 0; j < m; j++) {
                arr[i][j] = nextInt();
            }
        }
        st = new StringTokenizer(in.readLine());
        while (Q-- > 0) {
            int op = nextInt();
            int nx = sx, ny = sy;
            if (op == 1) ny = sy + 1;
            else if (op == 2) ny = sy - 1;
            else if (op == 3) nx = sx - 1;
            else nx = sx + 1;
            if (!isOk(nx, ny)) continue;
            roll(dice, op);
            if (arr[nx][ny] != 0) {
                dice[1] = arr[nx][ny];
                arr[nx][ny] = 0;
            } else {
                arr[nx][ny] = dice[1];
            }
            sx = nx; sy = ny;
            out.println(dice[6]);
        }
        out.close();
    }
}