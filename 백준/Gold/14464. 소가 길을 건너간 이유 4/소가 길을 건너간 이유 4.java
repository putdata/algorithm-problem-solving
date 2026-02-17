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
        int n =  nextInt(), m = nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = nextInt();
        List<int[]> cows = new ArrayList<>();
        for (int i = 0; i < m; i++) cows.add(new int[]{nextInt(), nextInt()});
        int ans = 0, idx = 0;
        Arrays.sort(arr);
        cows.sort(Arrays::compare);
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int t : arr) {
            while (idx < m && cows.get(idx)[0] <= t) {
                pq.add(cows.get(idx)[1]);
                idx++;
            }
            while (!pq.isEmpty() && pq.peek() < t) pq.remove();
            if (!pq.isEmpty()) {
                ans++;
                pq.remove();
            }
        }
        out.println(ans);
        out.close();
    }
}