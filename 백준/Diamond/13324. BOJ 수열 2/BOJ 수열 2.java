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
        PriorityQueue<Long> pq = new PriorityQueue<>((a, b) -> Long.compare(b, a));
        long[] c = new long[n];
        for (int i = 0; i < n; i++) {
            long a = nextInt() - i;
            pq.add(a);
            if (pq.peek() > a) {
                pq.poll();
                pq.add(a);
            }
            c[i] = pq.peek();
        }
        for (int i = n - 2; i >= 0; i--) c[i] = Math.min(c[i], c[i + 1]);
        for (int i = 0; i < n; i++) out.println(c[i] + i);
        out.close();
    }
}