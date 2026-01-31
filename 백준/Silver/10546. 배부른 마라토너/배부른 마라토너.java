import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int n = Integer.parseInt(in.readLine());
        Map<String, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String s = in.readLine();
            map.put(s, map.getOrDefault(s, 0) + 1);
        }
        for (int i = 0; i < n - 1; i++) {
            String s = in.readLine();
            map.compute(s, (k, cnt) -> cnt == 1 ? null : cnt - 1);
        }
        out.println(map.keySet().iterator().next());
        out.close();
    }
}