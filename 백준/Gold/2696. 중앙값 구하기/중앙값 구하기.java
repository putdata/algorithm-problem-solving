import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void solve() throws Exception {
        int n = Integer.parseInt(in.readLine());
        PriorityQueue<Integer> pq1 = new PriorityQueue<>(Comparator.reverseOrder()), pq2 = new PriorityQueue<>();
        pq1.add(Integer.MIN_VALUE); pq2.add(Integer.MAX_VALUE);
        List<Integer> ans = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            if (i % 10 == 1) st = new StringTokenizer(in.readLine());
            int x = Integer.parseInt(st.nextToken());
            pq1.add(x);
            while (pq1.size() > pq2.size()) {
                pq2.add(pq1.poll());
            }
            while (pq1.size() < pq2.size()) {
                pq1.add(pq2.poll());
            }
            if (i % 2 == 1) {
                ans.add(pq1.peek());
            }
        }
        out.println(ans.size());
        for (int i = 1; i <= ans.size(); i++) {
            out.print(ans.get(i - 1) + " ");
            if (i / 10 > 0 && i % 10 == 0 && i / 10 != n / 10) out.println();
        }
    }

    public static void main(String[] args) throws Exception {
        int t = Integer.parseInt(in.readLine());
        while (t-- > 0) {
            solve();
            out.println();
        }
        out.close();
    }
}