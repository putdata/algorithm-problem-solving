#include <bits/stdc++.h>
using namespace std;

vector<int> par;
int find(int x) {
  if (par[x] == x) return x;
  return par[x] = find(par[x]);
}

void merge(int x, int y) {
  if (x > y) swap(x, y);
  int px = find(x);
  int py = find(y);
  if (px != py) par[py] = px;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, q; cin >> n >> q;
  par.resize(n + 1);
  vector<int> save(n + 1);
  for (int i = 1; i <= n; i++) par[i] = i;
  for (int i = 2; i <= n; i++) {
    int x; cin >> x;
    save[i] = x;
  }
  stack<pair<int, int>> ques;
  stack<int> seq, rmv;
  for (int i = 0; i < n + q - 1; i++) {
    int x; cin >> x;
    seq.push(x);
    if (!x) {
      int b; cin >> b;
      rmv.push(b);
    } else {
      int c, d; cin >> c >> d;
      ques.push({c, d});
    }
  }
  stack<bool> ans;
  while (!seq.empty()) {
    int x = seq.top();
    seq.pop();
    if (!x) {
      merge(rmv.top(), save[rmv.top()]);
      rmv.pop();
    } else {
      auto [c, d] = ques.top();
      ques.pop();
      int tc = find(c), td = find(d);
      ans.push(tc == td);
    }
  }
  while (!ans.empty()) {
    ans.top() ? cout << "YES\n" : cout << "NO\n";
    ans.pop();
  }
  return 0;
}