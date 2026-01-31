import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
        Map<String, Set<String>> map = new HashMap<>();
        Map<String, String> name2team = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String team = in.readLine();
            map.put(team, new TreeSet<>());
            int x = Integer.parseInt(in.readLine());
            for (int j = 0; j < x; j++) {
                String name = in.readLine();
                name2team.put(name, team);
                map.get(team).add(name);
            }
        }
        for (int i = 0; i < m; i++) {
            String s = in.readLine();
            int op = Integer.parseInt(in.readLine());
            if (op == 1) {
                out.println(name2team.get(s));
            } else {
                for (String name : map.get(s)) {
                    out.println(name);
                }
            }
        }
        out.close();
    }
}