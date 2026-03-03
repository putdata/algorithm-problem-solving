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

    static final long INF = (long) 1e18;

    public static void main(String[] args) throws Exception {
        int n = nextInt(), m = nextInt();
        List<List<int[]>> edge = new ArrayList<>();
        for (int i = 0; i <= n; i++) edge.add(new ArrayList<>());
        for (int i = 0; i < m; i++) {
            int x = nextInt(), y = nextInt(), w = nextInt();
            edge.get(x).add(new int[]{y, w});
            edge.get(y).add(new int[]{x, w});
        }
        long[] oddDist = new long[n + 1], evenDist = new long[n + 1];
        for (int i = 0; i <= n; i++) oddDist[i] = evenDist[i] = INF;
        PriorityQueue<long[]> pq = new PriorityQueue<>(Arrays::compare);
        pq.offer(new long[]{0, 1});
        evenDist[1] = 0;
        while (!pq.isEmpty()) {
            long cost = pq.peek()[0];
            int cur = (int) pq.poll()[1];
            if (cost % 2 == 0 && cost > evenDist[cur]) continue;
            else if (cost % 2 == 1 && cost > oddDist[cur]) continue;
            for (int[] next : edge.get(cur)) {
                long tot = cost + next[1];
                if (tot % 2 == 0 && tot < evenDist[next[0]]) {
                    evenDist[next[0]] = tot;
                    pq.offer(new long[]{tot, next[0]});
                } else if (tot % 2 == 1 && tot < oddDist[next[0]]) {
                    oddDist[next[0]] = tot;
                    pq.offer(new long[]{tot, next[0]});
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            out.print((oddDist[i] == INF ? "-1" : oddDist[i]) + " ");
            out.println(evenDist[i] == INF ? "-1" : evenDist[i]);
        }
        out.close();
    }
}