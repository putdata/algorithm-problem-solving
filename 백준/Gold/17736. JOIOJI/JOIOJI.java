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

    public static void main(String[] args) throws Exception {
        int n = nextInt();
        String s = in.readLine();
        TreeMap<int[], Integer> map = new TreeMap<>(Arrays::compare);
        map.put(new int[]{0, 0}, 0);
        int sumJ = 0, sumI = 0, sumO = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            char c = s.charAt(i);
            if (c == 'J') sumJ++;
            else if (c == 'I') sumI++;
            else sumO++;

            int x = sumJ - sumI, y = sumJ - sumO;
            int[] v = new int[]{x, y};
            map.putIfAbsent(v, i + 1);
            ans = Math.max(ans, i + 1 - map.get(v));
        }
        out.println(ans);
        out.close();
    }
}