import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() {
        return Integer.parseInt(st.nextToken());
    }

    static final int MAX = 1_000_001;

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        int n = nextInt(), m = nextInt();
        st = new StringTokenizer(in.readLine());
        ArrayDeque<Integer> q = new ArrayDeque<>();
        boolean[] serve = new boolean[MAX];
        for (int i = 0; i < n; i++) {
            int x = nextInt();
            q.add(x - m);
            serve[x] = true;
        }
        boolean flag = true;
        int togi = 0;
        PriorityQueue<Integer> coffee = new PriorityQueue<>();
        for (int i = 0; i < MAX; i++) {
            if (serve[i]) {
                if (coffee.isEmpty()) {
                    flag = false;
                    break;
                }
                coffee.poll();
                continue;
            }
            if (!q.isEmpty() && i >= q.peekFirst()) {
                if (togi > 0) {
                    coffee.add(i);
                    q.pollFirst();
                    togi--;
                } else {
                    togi++;
                }
                continue;
            }
            togi++;
        }
        out.println(flag ? "success" : "fail");
        out.close();
    }
}