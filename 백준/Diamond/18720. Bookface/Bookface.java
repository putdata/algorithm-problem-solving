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

    public static long nextLong() throws IOException {
        if (st == null || !st.hasMoreTokens()) st = new StringTokenizer(in.readLine());
        return Long.parseLong(st.nextToken());
    }

    public static void main(String[] args) throws Exception {
        int t = nextInt();
        while (t-- > 0) {
            int n = nextInt();
            long d = nextLong();
            long[] c = new long[n];
            for (int i = 0; i < n; i++) c[i] = nextLong();
            Arrays.sort(c);
            PriorityQueue<Long> pq = new PriorityQueue<>((a, b) -> Long.compare(b, a));
            long ans = 0;
            for (int i = 0; i < n; i++) {
                long v = c[i] - i * d;
                if (v < 0) {
                    ans += -v;
                    v = 0;
                }
                pq.add(v);
                pq.add(v);
                ans += pq.poll() - v;
            }
            out.println(ans);
        }
        out.close();
    }
}