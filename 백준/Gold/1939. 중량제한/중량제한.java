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

    static int INF = (int) 1e9;

    public static void main(String[] args) throws Exception {
        int n = nextInt(), m = nextInt();
        List<List<int[]>> list = new ArrayList<>();
        for (int i = 0; i <= n; i++) {
            list.add(new ArrayList<>());
        }
        for (int i = 0; i < m; i++) {
            int x =  nextInt(), y = nextInt(), w = nextInt();
            list.get(x).add(new int[]{y, w});
            list.get(y).add(new int[]{x, w});
        }
        int start = nextInt(), end = nextInt();
        int[] dist = new int[n + 1];
        for (int i = 0; i <= n; i++) dist[i] = -INF;
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> Arrays.compare(b, a));
        pq.add(new int[]{INF, start});
        dist[start] = INF;
        while (!pq.isEmpty()) {
            int[] cur = pq.poll();
            if (cur[0] < dist[cur[1]]) continue;
            for (int[] next : list.get(cur[1])) {
                if (dist[next[0]] < Math.min(cur[0], next[1])) {
                    dist[next[0]] = Math.min(cur[0], next[1]);
                    pq.add(new int[]{dist[next[0]], next[0]});
                }
            }
        }
        out.println(dist[end]);
        out.close();
    }
}