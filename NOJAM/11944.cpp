#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m;
  cin >> n >> m;
  string s = to_string(n);
  int i = 0, size = s.size();
  if (n * size <= m) {
    while (n--) cout << s;
  } else {
    while (m--) {
      cout << s[i];
      i = (i + 1) % size;
    }
  }
  return 0;
}