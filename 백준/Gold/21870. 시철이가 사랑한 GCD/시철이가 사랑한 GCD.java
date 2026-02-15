import java.math.BigInteger;
import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static int nextInt() throws IOException {
        if (st == null || !st.hasMoreTokens()) st = new StringTokenizer(in.readLine());
        return Integer.parseInt(st.nextToken());
    }

    public static int gcd(int a, int b) {
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }

    static int[] arr;

    static class Pair {
        int g;
        long v;
        Pair(int g, long v) {
            this.g = g;
            this.v = v;
        }
    }

    public static Pair dnc(int l, int r) {
        if (l == r - 1) return new Pair(arr[l], arr[l]);
        int mid = (l + r) / 2;
        Pair lGcd = dnc(l, mid);
        Pair rGcd = dnc(mid, r);
        int allGcd = gcd(lGcd.g, rGcd.g);
        long mx = Math.max(lGcd.g + rGcd.v, rGcd.g + lGcd.v);
        return new Pair(allGcd, mx);
    }

    public static void main(String[] args) throws Exception {
        int n = nextInt();
        arr = new int[n];
        for (int i = 0; i < n; i++)  arr[i] = nextInt();
        out.println(dnc(0, n).v);
        out.close();
    }
}