import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws Exception {
        int n = Integer.parseInt(in.readLine());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            String s = in.readLine();
            boolean[] p = new boolean[300];
            boolean flag = true;
            for (int j = 0; j < s.length(); j++) {
                if (j > 0 && s.charAt(j - 1) != s.charAt(j)) {
                    if (p[s.charAt(j)]) {
                        flag = false;
                        break;
                    }
                }
                p[s.charAt(j)] = true;
            }
            if (flag) ans++;
        }
        out.println(ans);
        out.close();
    }
}