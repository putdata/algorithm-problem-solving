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

    static final int MOD = 998_244_353;

    public static void main(String[] args) throws Exception {
        int n = nextInt();
        int m = ~n + 1;
        int ans = 0;
        for (int i = 0; i < 32; i++) {
            if ((n & (1 << i)) != (m & (1 << i))) ans++;
        }
        out.println(ans);
        out.close();
    }
}