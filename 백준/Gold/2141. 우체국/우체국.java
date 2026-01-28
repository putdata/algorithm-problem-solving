import java.util.*;
import java.io.*;

public class Main {

    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        int n = Integer.parseInt(in.readLine());
        long[][] arr = new long[n][2];
        long sum = 0;
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(in.readLine());
            arr[i][0] = Long.parseLong(st.nextToken());
            arr[i][1] = Long.parseLong(st.nextToken());
            sum += arr[i][1];
        }
        Arrays.sort(arr, Comparator.comparing(o -> o[0]));
        sum = -sum;
        long ans = 0;
        for (int i = 0; i < n; i++) {
            sum += 2L * arr[i][1];
            if (sum >= 0L) {
                ans = arr[i][0];
                break;
            }
        }
        out.println(ans);
        out.close();
    }
}