import java.math.BigInteger;
import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() throws IOException {
        if (st == null || !st.hasMoreTokens()) st = new StringTokenizer(in.readLine());
        return Integer.parseInt(st.nextToken());
    }
    public static void main(String[] args) throws Exception {
        int t = nextInt();
        while (t-- > 0) {
            in.readLine();
            int a = nextInt(), b = nextInt(), c = nextInt(), d = nextInt(), e = nextInt();
            double[] tmp = new double[]{a / 8., b / 8., c / 4., d, e / 9.};
            Arrays.sort(tmp);
            int mix = (int) (tmp[0] * 16);
            int ans = 0;
            a = nextInt(); b = nextInt(); c = nextInt(); d = nextInt();
            int mn = Math.min(mix, a);
            ans += mn; mix -= mn;
            mn = Math.min(mix, b / 30);
            ans += mn; mix -= mn;
            mn = Math.min(mix, c / 25);
            ans += mn; mix -= mn;
            mn = Math.min(mix, d / 10);
            ans += mn;
            out.println(ans);
        }
        out.close();
    }
}