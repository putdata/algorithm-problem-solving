#include <bits/stdc++.h>
using namespace std;

int k;
vector<int> vec;
vector<vector<int>> tree;
void foo(int l, int r, int y) {
  if (y >= k) return;
  int mid = (l + r) >> 1;
  foo(l, mid - 1, y + 1);
  foo(mid + 1, r, y + 1);
  tree[y].push_back(mid);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> k;
  vec.resize(1 << k);
  tree.resize(k);
  for (int i = 0; i < 1 << k; i++) cin >> vec[i];
  foo(0, (1 << k) - 1, 0);
  for (int i = 0; i < k; i++) {
    for (auto it : tree[i]) cout << vec[it] << ' ';
    cout << '\n';
  }
  return 0;
}