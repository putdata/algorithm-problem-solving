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
        int[] ans = {0, 1, 0, 0, 0, 1, 1, 1, 0, 0};
        int n = nextInt();
        out.println(ans[n - 1] > 0 ? "Think before submission" : "Solve harder problems");
        out.close();
    }
}