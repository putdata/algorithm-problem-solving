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
        int n = nextInt(), m = nextInt();
        if (m < 3) out.println("NEWBIE!");
        else if (m <= n) out.println("OLDBIE!");
        else out.println("TLE!");
        out.close();
    }
}