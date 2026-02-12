import java.math.BigInteger;
import java.util.*;
import java.io.*;

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
        List<int[]> vec = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int x = nextInt(), y = nextInt();
            vec.add(new int[]{x, y});
        }
        vec.sort(Arrays::compare);
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        int ans = 0;
        for (int[] v : vec) {
            pq.add(v[1]);
            ans += v[1];
            while (pq.size() > v[0]) ans -= pq.poll();
        }
        out.println(ans);
        out.close();
    }
}