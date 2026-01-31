import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
        Set<String> set = new HashSet<>();
        for (int i = 0; i < n; i++) {
            String s = in.readLine();
            set.add(s);
        }
        List<String> list = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            String s = in.readLine();
            if (set.contains(s)) list.add(s);
        }
        Collections.sort(list);
        out.println(list.size());
        for (String s : list) out.println(s);
        out.close();
    }
}