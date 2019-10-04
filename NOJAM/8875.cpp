#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a, b, t; cin >> a >> b >> t;
  int w[a], s[b];
  pair<int, int> p[t];
  for (int i = 0; i < a; i++) cin >> w[i];
  for (int i = 0; i < b; i++) cin >> s[i];
  for (int i = 0; i < t; i++) cin >> p[i].first >> p[i].second;
  sort(w, w + a); sort(s, s + b); sort(p, p + t);
  int l = 1, r = t;
  while (l <= r) {
    int mid = (l + r) / 2;
    priority_queue<int> pq;
    int idx = 0;
    for (int i = 0; i < a; i++) {
      for (; idx < t && p[idx].first < w[i]; idx++)
        pq.push(p[idx].second);
      int time = mid;
      while (time-- && !pq.empty()) pq.pop();
    }
    while (idx < t) pq.push(p[idx++].second);
    for (int i = b - 1; i > -1; i--) {
      if (pq.empty() || pq.top() >= s[i]) break;
      int time = mid;
      while (time-- && !pq.empty()) pq.pop();
    }
    pq.empty() ? r = mid - 1 : l = mid + 1;
  }
  cout << (l > t ? -1 : l);
  return 0;
}