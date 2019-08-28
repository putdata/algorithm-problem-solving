#include <bits/stdc++.h>
using namespace std;

int n, k;
string a[11];
bool vis[11];
set<string> sat;
void foo(int len, string s) {
  if (len == k) {
    if (sat.find(s) == sat.end()) sat.insert(s);
    return;
  }
  for (int i = 0; i < n; i++) {
    if (vis[i]) continue;
    vis[i] = 1;
    foo(len + 1, s + a[i]);
    vis[i] = 0;
  }
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> a[i];
  foo(0, "");
  cout << sat.size();
  return 0;
}