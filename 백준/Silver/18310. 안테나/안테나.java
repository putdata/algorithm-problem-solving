import java.util.*;
import java.io.*;

public class Main {

    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int n = Integer.parseInt(in.readLine());
        int[] arr = new int[n];
        st = new StringTokenizer(in.readLine());
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);
        out.println(arr[(n - 1) / 2]);
        out.close();
    }
}