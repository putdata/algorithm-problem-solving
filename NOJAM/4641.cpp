#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    vector<int> vec;
    bool chk[345] = {};
    while (1) {
      int x; cin >> x;
      if (x == -1) return 0;
      if (x == 0) break;
      vec.push_back(x);
      chk[x * 2] = 1;
    }
    int size = vec.size();
    int ans = 0;
    for (int i = 0; i < size; i++) {
      ans += chk[vec[i]] == 1;
    }
    cout << ans << '\n';
  }
  return 0;
}