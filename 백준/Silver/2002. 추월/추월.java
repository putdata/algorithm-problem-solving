import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int n = Integer.parseInt(in.readLine());
        List<String> seq = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String s = in.readLine();
            seq.add(s);
        }
        Map<String, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String s = in.readLine();
            map.put(s, i);
        }
        int ans = 0;
        for (int i = 1; i < n; i++) {
            Integer base = map.get(seq.get(i));
            for (int j = 0; j < i; j++) {
                String a = seq.get(j);
                if (base < map.get(a)) {
                    ans++;
                    break;
                }
            }
        }
        out.println(ans);
        out.close();
    }
}