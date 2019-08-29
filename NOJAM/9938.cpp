#include <bits/stdc++.h>
using namespace std;

vector<int> par;
int find(int x) {
  if (par[x] == x) return x;
  return par[x] = find(par[x]);
}

void merge(int x, int y) {
  int px = find(x);
  int py = find(y);
  par[py] = px;
  cout << "LADICA\n";
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, l; cin >> n >> l;
  par.resize(l + 1);
  vector<bool> vis(l + 1);
  for (int i = 1; i <= l; i++) par[i] = i;
  while (n--) {
    int a, b; cin >> a >> b;
    if (!vis[a]) {
      merge(b, a);
      vis[a] = 1;
    } else if (!vis[b]) {
      merge(a, b);
      vis[b] = 1;
    } else if (!vis[find(a)]) {
      merge(b, a);
      vis[par[a]] = 1;
    } else if (!vis[find(b)]) {
      merge(a, b);
      vis[par[b]] = 1;
    } else cout << "SMECE\n";
  }
  return 0;
}