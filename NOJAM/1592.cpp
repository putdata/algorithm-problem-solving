#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, l; cin >> n >> m >> l;
  vector<int> vec(n, 0);
  int cur = 0, cnt = 0;
  while (1) {
    vec[cur]++;
    if (vec[cur] == m) break;
    if (vec[cur] % 2) cur = (cur + l) % n;
    else cur = (cur - l + n) % n;
    cnt++;
  }
  cout << cnt;
  return 0;
}