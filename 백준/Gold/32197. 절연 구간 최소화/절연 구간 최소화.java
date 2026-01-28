import java.util.*;
import java.io.*;

public class Main {
    static class Pair {
        int x;
        int y;

        Pair(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
        List<List<Pair>> adj = new ArrayList<>();
        for (int i = 0; i <= n; i++) adj.add(new ArrayList<>());
        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(in.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            int z = Integer.parseInt(st.nextToken());
            adj.get(x).add(new Pair(y, z));
            adj.get(y).add(new Pair(x, z));
        }
        st = new StringTokenizer(in.readLine());
        int start = Integer.parseInt(st.nextToken()), end = Integer.parseInt(st.nextToken());
        int INF = (int)1e9;
        int[][] dist = new int[n + 1][2];
        for (int i = 0; i <= n; i++) Arrays.fill(dist[i], INF);
        // 비용, 위치, 공급방식
        PriorityQueue<int[]> pq = new PriorityQueue<>(Arrays::compare);
        pq.add(new int[]{0, start, 0});
        pq.add(new int[]{0, start, 1});
        dist[start][0] = dist[start][1] = 0;
        while (!pq.isEmpty()) {
            int[] top = pq.poll();
            if (dist[top[1]][top[2]] < top[0]) continue;
            for (var next : adj.get(top[1])) {
                int w = top[2] == next.y ? 0 : 1;
                if (dist[next.x][next.y] <= top[0] + w) continue;
                dist[next.x][next.y] = top[0] + w;
                pq.add(new int[]{dist[next.x][next.y], next.x, next.y});
            }
        }
        out.println(Math.min(dist[end][0], dist[end][1]));
        out.close();
    }
}