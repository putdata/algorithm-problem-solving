import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws Exception {
        String s = in.readLine();
        String a = in.readLine();
        int ans = 0;
        for (int i; (i = s.indexOf(a)) != -1;) {
            ans++;
            s = s.substring(i + a.length());
        }
        out.println(ans);
        out.close();
    }
}