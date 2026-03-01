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
        List<Character> list = new ArrayList<>();
        char[] ppap = {'P', 'P', 'A', 'P'};
        for (char c : s.toCharArray()) {
            list.add(c);
            if (list.size() > 3) {
                boolean flag = true;
                for (int i = 0; i < 4; i++) {
                    flag &= list.get(list.size() - 4 + i) == ppap[i];
                }
                if (flag) {
                    for (int i = 0; i < 3; i++) list.remove(list.size() - 1);
                }
            }
        }
        if (list.size() == 1 && list.get(0) == 'P') out.println("PPAP");
        else out.println("NP");
        out.close();
    }
}