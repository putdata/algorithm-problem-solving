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
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            boolean flag = true;
            int x = i;
            while (x > 0) {
                if (!(x % 10 == 4 || x % 10 == 7)) {
                    flag = false;
                    break;
                }
                x /= 10;
            }
            if (flag) {
                ans = i;
            }
        }
        out.println(ans);
        out.close();
    }
}