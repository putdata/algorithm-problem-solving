#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int x[4], y[4];
    for (int i = 0; i < 4; i++) cin >> x[i] >> y[i];
    int dist[6], k = 0;
    for (int i = 0; i < 4; i++)
      for (int j = i + 1; j < 4; j++)
        dist[k++] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
    sort(dist, dist + 6);
    dist[0] == dist[3] && dist[4] == dist[5] ? cout << "1\n" : cout << "0\n";
  }
  return 0;
}