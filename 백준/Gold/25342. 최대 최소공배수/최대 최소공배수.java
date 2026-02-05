import java.math.BigInteger;
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
        int t = Integer.parseInt(in.readLine());
        while (t-- > 0) {
            long x = Long.parseLong(in.readLine());
            out.println(x % 2 == 1 ?
                    x * (x - 1) * (x - 2) :
                    x % 3 == 0 ? (x - 1) * (x - 2) * (x - 3) : x * (x - 1) * (x - 3)
            );
        }
        out.close();
    }
}