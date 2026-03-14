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
        while (n-- > 0) {
            long x = Long.parseLong(in.readLine());
            boolean flag = false;
            for (long i = 2; i <= 1000000 && i * i <= x; i++) {
                if (x % i == 0) flag = true;
            }
            if (flag) out.println("NO");
            else out.println("YES");
        }
        out.close();
    }
}