#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  stack<int> st;
  queue<char> q;
  int last = 0;
  vector<bool> out(n + 1, 0);
  while (n--) {
    int x; cin >> x;
    if (out[x]) {
      cout << "NO";
      return 0;
    }
    if (last < x) {
      while (last != x) {
        st.push(++last);
        q.push('+');
      }
      st.pop();
      q.push('-');
      out[x] = 1;
    } else {
      while (!st.empty() && st.top() >= x) {
        out[st.top()] = 1;
        st.pop();
        q.push('-');
      }
    }
  }
  while (!q.empty()) {
    cout << q.front() << '\n';
    q.pop();
  }
  return 0;
}