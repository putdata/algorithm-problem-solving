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

    static long INF = (long) -1e15;

    public static void main(String[] args) throws Exception {
        int n = nextInt();
        TreeSet<Long> set = new TreeSet<>();
        long pos = 0, tot = 0;
        for (int i = 0; i < n; i++) {
            int op = nextInt();
            if (op == 1) {
                long v =  nextInt();
                set.add(v);
            } else {
                while (!set.isEmpty()) {
                    Long prev = set.floor(pos);
                    if (prev == null) prev = -INF;
                    Long next = set.higher(pos);
                    if (next == null) next = INF;
                    long diff1 = Math.abs(pos - prev), diff2 = Math.abs(pos - next);
                    if (diff1 <= diff2) {
                        tot += diff1;
                        pos = prev;
                        set.remove(prev);
                    } else {
                        tot += diff2;
                        pos = next;
                        set.remove(next);
                    }
                }
            }
        }
        out.println(tot);
        out.close();
    }
}