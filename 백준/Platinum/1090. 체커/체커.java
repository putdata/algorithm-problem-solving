import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() {
        return Integer.parseInt(st.nextToken());
    }

    public static void main(String[] args) throws Exception {
        int n = Integer.parseInt(in.readLine());
        int[] x = new int[n], y = new int[n];
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(in.readLine());
            x[i] = nextInt();
            y[i] = nextInt();
        }
        int[] ans = new int[n];
        Arrays.fill(ans, (int)1e9);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                List<Integer> list = new ArrayList<>();
                for (int k = 0; k < n; k++) {
                    list.add(Math.abs(x[i] - x[k]) + Math.abs(y[j] - y[k]));
                }
                Collections.sort(list);
                for (int k = 0, sum = 0; k < n; k++) {
                    sum += list.get(k);
                    ans[k] = Math.min(ans[k], sum);
                }
            }
        }
        for (int i = 0; i < n; i++) out.print(ans[i] + " ");
        out.close();
    }
}