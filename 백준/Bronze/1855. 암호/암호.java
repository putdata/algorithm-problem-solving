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
        int n = nextInt();
        String s = in.readLine();
        char[][] arr = new char[s.length() / n][n];
        int pos = 0;
        for (int i = 0; i < s.length() / n; i++) {
            for (int j = 0; j < n; j++) {
                if (i % 2 == 0) arr[i][j] = s.charAt(pos);
                else arr[i][n - j - 1] =  s.charAt(pos);
                pos++;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < s.length() / n; j++) {
                out.print(arr[j][i]);
            }
        }
        out.close();
    }
}