#include <bits/stdc++.h>
using namespace std;

vector<tuple<int, int, int>> vec;
vector<int> p;
int find(int x) {
  if (p[x] == x) return x;
  return p[x] = find(p[x]);
}

void merge(int x, int y) {
  x = find(x), y = find(y);
  p[y] = x;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  p.resize(n + 1);
  for (int i = 1; i <= n; i++) p[i] = i;
  pair<int, int> mx[n], my[n], mz[n];
  for (int i = 1; i <= n; i++) {
    int x, y, z; cin >> x >> y >> z;
    mx[i - 1] = {x, i};
    my[i - 1] = {y, i};
    mz[i - 1] = {z, i};
  }
  sort(mx, mx + n); sort(my, my + n); sort(mz, mz + n);
  for (int i = 1; i < n; i++) {
    vec.push_back({abs(mx[i].first - mx[i - 1].first), mx[i].second, mx[i - 1].second});
    vec.push_back({abs(my[i].first - my[i - 1].first), my[i].second, my[i - 1].second});
    vec.push_back({abs(mz[i].first - mz[i - 1].first), mz[i].second, mz[i - 1].second});
  }
  sort(vec.begin(), vec.end());
  int cnt = 0;
  long long ans = 0;
  for (auto it : vec) {
    auto [cost, x, y] = it;
    if (find(x) != find(y)) {
      ans += cost;
      merge(x, y);
      cnt++;
    }
    if (cnt == n - 1) break;
  }
  cout << ans;
  return 0;
}