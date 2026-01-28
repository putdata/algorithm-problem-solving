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
        long[] psum = new long[100001];
        int[] cnt = new int[100001];
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
            cnt[arr[i]]++;
            psum[arr[i]] += arr[i];
        }
        Arrays.sort(arr);
        for (int i = 1; i <= 100000; i++) {
            psum[i] += psum[i - 1];
            cnt[i] += cnt[i - 1];
        }
        long mn = (long)1e18, ans = 1;
        for (int i = 0; i < n; i++) {
            long v1 = (long)arr[i] * cnt[arr[i]];
            long v2 = (long)arr[i] * n - v1;
            long a = Math.abs(v1 - psum[arr[i]]);
            long b = Math.abs(psum[100000] - psum[arr[i]] - v2);
            if (mn > a + b) {
                mn = a + b;
                ans = arr[i];
            }
        }
        out.println(ans);
        out.close();
    }
}