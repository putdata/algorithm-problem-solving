#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  for(int tc = 1; tc <= t; tc++) {
    int n; cin >> n;
    vector<int> vec(2 * n);
    vector<int> ans;
    for (int i = 0; i < 2 * n; i++) cin >> vec[i];
    for (int i = 0; vec.size();) {
      auto bs = lower_bound(vec.begin(), vec.end(), vec[i] / 4 * 3);
      if (*bs == vec[i] / 4 * 3) {
        ans.push_back(*bs);
        vec.erase(vec.begin() + i);
        vec.erase(bs);
        i = 0;
      } else ++i;
    }
    cout << "Case #" << tc << ": ";
    for (auto it : ans) cout << it << ' ';
    cout << '\n';
  }
  return 0;
}