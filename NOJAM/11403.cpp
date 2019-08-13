#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  vector<vector<int>> dist(n, vector<int>(n, INF));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x; cin >> x;
      if (x) dist[i][j] = x;
    }
  }
  for (int v = 0; v < n; v++) {
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        dist[i][j] = min(dist[i][j], dist[i][v] + dist[v][j]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      dist[i][j] == INF ? cout << "0 " : cout << "1 ";
    cout << '\n';
  }
  return 0;
}