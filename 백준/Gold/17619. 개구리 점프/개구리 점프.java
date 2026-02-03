import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() {
        return Integer.parseInt(st.nextToken());
    }

    static int[] parent;

    public static int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    public static void merge(int x, int y) {
        int px = find(x), py = find(y);
        parent[py] = px;
    }

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        int N = nextInt(), Q = nextInt();
        parent = new int[N + 1];
        for (int i = 1; i <= N; i++) parent[i] = i;
        List<int[]> arr = new ArrayList<>();
        for (int i = 1; i <= N; i++) {
            st = new StringTokenizer(in.readLine());
            int x1 = nextInt(), x2 = nextInt(), y = nextInt();
            arr.add(new int[]{x1, x2, i});
        }
        arr.sort(Arrays::compare);
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> Arrays.compare(b, a));
        for (int[] v : arr) {
            while (!pq.isEmpty() && pq.peek()[0] < v[0]) {
                pq.remove();
            }
            if (!pq.isEmpty()) {
                merge(pq.peek()[1], v[2]);
            }
            pq.add(new int[]{v[1], v[2]});
        }
        while (Q-- > 0) {
            st = new StringTokenizer(in.readLine());
            int x = nextInt(), y = nextInt();
            out.println(find(x) == find(y) ? "1" : "0");
        }
        out.close();
    }
}