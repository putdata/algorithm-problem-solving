#include <bits/stdc++.h>
using namespace std;

vector<int> par;
int find(int x) {
  if (par[x] == x) return x;
  return par[x] = find(par[x]);
}

void merge(int x, int y) {
  x = find(x);
  y = find(y);
  par[y] = x;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  par.resize(n + 1);
  for (int i = 1; i <= n; i++) par[i] = i;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      int x; cin >> x;
      if (x) merge(i, j);
    }
  }
  int des; cin >> des;
  des = find(des);
  bool ok = true;
  for (int i = 1; i <= m; i++) {
    int x; cin >> x;
    ok &= des == find(x);
  }
  ok ? cout << "YES" : cout << "NO";
  return 0;
}