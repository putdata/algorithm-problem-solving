#include <bits/stdc++.h>
using namespace std;

int n, a[100001], cnt;
bool vis[100001], f[100001];
void foo(int x) {
  int next = a[x];
  if (!vis[next]) {
    vis[next] = 1;
    foo(next);
  } else if (!f[next]) {
    cnt++;
    for (int i = next; i != x; i = a[i]) cnt++;
  }
  f[x] = 1;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
      if (vis[i]) continue;
      vis[i] = 1;
      foo(i);
    }
    cout << n - cnt << '\n';
    memset(vis, 0, sizeof(vis));
    memset(f, 0, sizeof(f));
    cnt = 0;
  }
  return 0;
}