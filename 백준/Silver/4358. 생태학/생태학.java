import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        String s;
        int cnt = 0;
        Map<String, Integer> map = new HashMap<>();
        while ((s = in.readLine()) != null) {
            cnt++;
            map.put(s, map.getOrDefault(s, 0) + 1);
        }
        List<String> list = new ArrayList<>(map.keySet());
        list.sort(String::compareTo);
        for (String tree : list) {
            out.println(tree + " " + String.format("%.4f", (double)map.get(tree) / cnt * 100.0));
        }
        out.close();
    }
}