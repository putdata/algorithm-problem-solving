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

    static int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    public static void main(String[] args) throws Exception {
        int t = nextInt();
        while (t-- > 0) {
            int x = Math.abs(nextInt()), y = Math.abs(nextInt());
            int k = nextInt(), g = 0;
            for (int i = 0; i < k; i++) {
                int v = nextInt();
                g = gcd(g, v);
            }
            if (x % g == 0 && y % g == 0) out.println("Ta-da");
            else out.println("Gave up");
        }
        out.close();
    }
}