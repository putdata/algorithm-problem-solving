#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int n;
vector<pair<int, int>> t;
void init() {
  for (int i = n - 1; i > 0; i--) {
    vector<int> vec;
    auto [x1, x2] = t[i << 1];
    auto [y1, y2] = t[i << 1 | 1];
    int arr[] = {x1, x2, y1, y2};
    sort(arr, arr + 4);
    t[i] = {arr[2], arr[3]};
  }
}

void update(int p, int v) {
  for (t[p += n] = {v, 0}; p > 1; p >>= 1) {
    auto [x1, x2] = t[p];
    auto [y1, y2] = t[p ^ 1];
    int arr[] = {x1, x2, y1, y2};
    sort(arr, arr + 4);
    t[p >> 1] = {arr[2], arr[3]};
  }
}

int query(int l, int r) {
  int arr[4] = {};
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) {
      tie(arr[0], arr[1]) = t[l++];
      sort(arr, arr + 4);
    }
    if (r & 1) {
      tie(arr[0], arr[1]) = t[--r];
      sort(arr, arr + 4);
    }
  }
  return arr[2] + arr[3];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  t.resize(n * 2);
  for (int i = 0; i < n; i++) cin >> t[i + n].first;
  init();
  int m; cin >> m;
  while (m--) {
    int x, y, z; cin >> x >> y >> z;
    if (x == 1) update(y - 1, z);
    else cout << query(y - 1, z) << '\n';
  }
  return 0;
}