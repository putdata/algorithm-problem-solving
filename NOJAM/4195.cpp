#include <bits/stdc++.h>
using namespace std;

map<string, string> p;
map<string, int> w;
string find(string x) {
  if (p[x] == x) return x;
  return p[x] = find(p[x]);
}

void merge(string x, string y) {
  x = find(x);
  y = find(y);
  if (x == y) return;
  p[y] = x;
  w[x] = w[x] + w[y];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    p.clear();
    w.clear();
    int f; cin >> f;
    while (f--) {
      string a, b; cin >> a >> b;
      if (p.find(a) == p.end()) {
        p[a] = a;
        w[a] = 1;
      }
      if (p.find(b) == p.end()) {
        p[b] = b;
        w[b] = 1;
      }
      merge(a, b);
      cout << w[find(a)] << '\n';
    }
  }
  return 0;
}