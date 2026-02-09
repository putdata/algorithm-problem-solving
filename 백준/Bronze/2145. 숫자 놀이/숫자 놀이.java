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
        while (true) {
            int t = nextInt();
            if (t == 0) break;
            while (t >= 10) {
                int sum = 0, tmp = t;
                while (tmp > 0) {
                    sum += tmp % 10;
                    tmp /= 10;
                }
                t = sum;
            }
            out.println(t);
        }
        out.close();
    }
}