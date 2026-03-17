import java.io.*;
import java.util.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() throws IOException {
        if (st == null || !st.hasMoreTokens()) st = new StringTokenizer(in.readLine());
        return Integer.parseInt(st.nextToken());
    }

    public static void main(String[] args) throws Exception {
        String s = in.readLine();
        String[] arr = s.split("/");
        if (Integer.parseInt(arr[0]) + Integer.parseInt(arr[2]) < Integer.parseInt(arr[1]) || Integer.parseInt(arr[1]) == 0) {
            out.println("hasu");
        } else {
            out.println("gosu");
        }
        out.close();
    }
}