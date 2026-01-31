import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    static class Pair {
        int x = 0;
        int y;

        Pair(int y) {
            this.y = y;
        }
    }

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(in.readLine());
        Map<Integer, Pair> map = new HashMap<>();
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int x = Integer.parseInt(st.nextToken());
            map.putIfAbsent(x, new Pair(i));
            map.get(x).x++;
            list.add(x);
        }
        list.sort((o1, o2) -> {
            Pair x = map.get(o1), y = map.get(o2);
            if (x.x != y.x) return y.x - x.x;
            return x.y - y.y;
        });
        for (Integer x : list) out.print(x + " ");
        out.close();
    }
}