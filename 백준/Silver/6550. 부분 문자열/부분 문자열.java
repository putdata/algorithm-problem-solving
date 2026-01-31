import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        try {
            while (true) {
                st = new StringTokenizer(in.readLine());
                String a = st.nextToken();
                String b = st.nextToken();
                int idx = 0;
                boolean flag = true;
                for (int i = 0; i < a.length(); i++) {
                    idx = b.indexOf(a.charAt(i), idx);
                    if (idx == -1) {
                        flag = false;
                        break;
                    }
                    idx++;
                }
                out.println(flag ? "Yes" : "No");
            }
        } catch (Exception e) {

        } finally {
            out.close();
        }
    }
}