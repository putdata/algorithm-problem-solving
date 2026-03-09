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

    static long MOD = (int) 1e9 + 7;

    public static void main(String[] args) throws Exception {
        int n = nextInt();
        String a = in.readLine(), b = in.readLine();
        int cnt1 = 0, cnt2 = 0;
        for (char c : a.toCharArray()) if (c == 'w') cnt1++;
        for (char c : b.toCharArray()) if (c == 'w') cnt2++;
        if (a.equals(b)) out.println("Good");
        else if (cnt1 > cnt2) out.println("Oryang");
        else if (cnt1 < cnt2) out.println("Manners maketh man");
        else out.println("Its fine");
        out.close();
    }
}