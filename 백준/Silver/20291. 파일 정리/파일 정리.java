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
            int idx = s.indexOf('.');
            String last = s.substring(idx + 1);
            map.merge(last, 1, Integer::sum);
        }
        List<String> list = new ArrayList<>(map.keySet());
        list.sort(String::compareTo);
        for (String s : list) {
            out.println(s + " " + map.get(s));
        }
        out.close();
    }
}