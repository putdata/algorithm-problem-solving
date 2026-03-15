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
        int t = nextInt();
        while (t-- > 0) {
            in.readLine();
            int n = nextInt(), m = nextInt();
            List<int[]> list = new ArrayList<>();
            for (int i = 0; i < n; i++) list.add(new int[]{nextInt(), 1});
            for (int i = 0; i < m; i++) list.add(new int[]{nextInt(), 0});
            list.sort(Arrays::compare);
            if (list.get(n + m - 1)[1] == 1) out.println("S");
            else out.println("B");
        }
        out.close();
    }
}