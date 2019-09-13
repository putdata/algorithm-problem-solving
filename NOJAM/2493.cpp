#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  stack<pair<int, int>> st;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    bool ok = false;
    while (!st.empty()) {
      auto [num, idx] = st.top();
      if (x <= num) {
        cout << idx << ' ';
        ok = true;
        break;
      }
      st.pop();
    }
    if (!ok) cout << "0 ";
    st.push({x, i});
  }
  return 0;
}