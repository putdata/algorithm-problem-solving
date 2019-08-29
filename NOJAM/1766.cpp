#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  vector<vector<int>> vec(n + 1);
  vector<int> fore(n + 1, 0);
  while (m--) {
    int a, b; cin >> a >> b;
    vec[a].push_back(b);
    fore[b]++;
  }
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 1; i <= n; i++) {
    if (fore[i] == 0) pq.push(i);
  }
  while (!pq.empty()) {
    int t = pq.top();
    pq.pop();
    cout << t << ' ';
    for (auto it : vec[t]) {
      if (--fore[it] == 0) pq.push(it);
    }
  }
  return 0;
}