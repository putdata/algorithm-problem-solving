import java.math.BigInteger;
import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static long nextInt() throws IOException {
        if (st == null || !st.hasMoreTokens()) st = new StringTokenizer(in.readLine());
        return Long.parseLong(st.nextToken());
    }

    public static void main(String[] args) throws Exception {
        long x = nextInt(), n = nextInt();
        // 반복되는 주기를 찾자.
        List<Long> list = new ArrayList<>();
        // 숫자 -> 리스트 인덱스 매핑
        Map<Long, Integer> map = new HashMap<>();
        list.add(x); map.put(x, 0);
        int start, end;
        for (int i = 1;; i++) {
            x = x % 2L == 0 ? (x / 2) ^ 6L : (x * 2) ^ 6L;
            if (map.containsKey(x)) {
                start = map.get(x);
                end = i;
                break;
            }
            list.add(x);
            map.put(x, i);
        }
        if (n < list.size()) {
            out.println(list.get((int) n));
        } else {
            n -= start;
            long idx = start + (n % (end - start));
            out.println(list.get((int) idx));
        }
        out.close();
    }
}