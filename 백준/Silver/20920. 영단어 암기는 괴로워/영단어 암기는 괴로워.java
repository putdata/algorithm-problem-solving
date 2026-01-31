import java.util.*;
import java.io.*;

public class Main {
    static final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static final PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    static class Word {
        int cnt = 0;
        String s;

        Word(String s) {
            this.s = s;
        }
    }

    public static void main(String[] args) throws Exception {
        st = new StringTokenizer(in.readLine());
        int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
        Map<String, Word> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String s = in.readLine();
            if (s.length() < m) continue;
            if (!map.containsKey(s)) {
                map.put(s, new Word(s));
            } else {
                map.get(s).cnt++;
            }
        }
        List<Word> list = new ArrayList<>();
        for (Map.Entry<String, Word> e : map.entrySet()) {
            list.add(e.getValue());
        }
        list.sort((o1, o2) -> {
            if (o1.cnt != o2.cnt) return o2.cnt - o1.cnt;
            if (o1.s.length() != o2.s.length()) return o2.s.length() - o1.s.length();
            return o1.s.compareTo(o2.s);
        });
        for (Word w : list) {
            out.println(w.s);
        }
        out.close();
    }
}