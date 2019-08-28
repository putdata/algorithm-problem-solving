#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  for (int i = 1;; i++) {
    string a, b; cin >> a >> b;
    if (a == "END" && b == "END") break;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << "Case " << i << ": ";
    a == b ? cout << "same\n" : cout << "different\n";
  }
  return 0;
}