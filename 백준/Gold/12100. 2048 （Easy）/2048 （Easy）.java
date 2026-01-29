import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    static int n;
    static int[][] arr, arr2;
    static int ans = 0;

    public static void compress(int[] list) {
        for (int i = 0; i < n - 1; i++) {
            if (list[i] == 0) {
                for (int j = i + 1; j < n; j++) if (list[j] > 0) {
                    list[i] = list[j];
                    list[j] = 0;
                    break;
                }
            }
            if (list[i] > 0) {
                for (int j = i + 1; j < n; j++) if (list[j] > 0) {
                    if (list[i] == list[j]) {
                        list[i] *= 2;
                        list[j] = 0;
                    }
                    break;
                }
            }
        }
    }
    // 1(상), 2(하), 3(좌), 4(우)
    public static void func(int[] move) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) arr2[i][j] = arr[i][j];
        for (int step = 0; step < 5; step++) {
            for (int i = 0; i < n; i++) {
                int[] tmp = new int[n];
                for (int j = 0; j < n; j++) {
                    if (move[step] == 1) tmp[j] = arr2[j][i];
                    else if (move[step] == 2) tmp[j] = arr2[n - 1 - j][i];
                    else if (move[step] == 3) tmp[j] = arr2[i][j];
                    else tmp[j] = arr2[i][n - 1 - j];
                }
                compress(tmp);
                for (int j = 0; j < n; j++) {
                    ans = Math.max(ans, tmp[j]);
                    if (move[step] == 1) arr2[j][i] = tmp[j];
                    else if (move[step] == 2) arr2[n - 1- j][i] = tmp[j];
                    else if (move[step] == 3) arr2[i][j] = tmp[j];
                    else arr2[i][n - 1- j] = tmp[j];
                }
            }
        }
    }

    public static void main(String[] args) throws Exception {
         n = Integer.parseInt(in.readLine());
         arr = new int[n][n];
         arr2 = new int[n][n];
         for (int i = 0; i < n; i++) {
             st = new StringTokenizer(in.readLine());
             for (int j = 0; j < n; j++) {
                 arr[i][j] = Integer.parseInt(st.nextToken());
             }
         }
         for (int a = 1; a <= 4; a++)
             for (int b = 1; b <= 4; b++)
                 for (int c = 1; c <= 4; c++)
                     for (int d = 1; d <= 4; d++)
                         for (int e = 1; e <= 4; e++)
                             func(new int[]{a, b, c, d, e});

         out.println(ans);
         out.close();
    }
}