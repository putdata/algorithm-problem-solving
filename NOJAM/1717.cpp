#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> parent;

int dfs(int x) {
  if (parent[x] == x) return x;
  return parent[x] = dfs(parent[x]);
}

void sum(int a, int b) {
  int pa = dfs(a);
  int pb = dfs(b);
  if (pa != pb) parent[pb] = pa;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> m;
  parent.resize(n + 1);
  for (int i = 0; i <= n; i++) parent[i] = i;
  while (m--) {
      int a, b, c;
      cin >> a >> b >> c;
      if (!a) sum(b, c);
      else dfs(b) == dfs(c) ? cout << "YES\n" : cout << "NO\n";
  }
  return 0;
}