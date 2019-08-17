#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    int size = a.size();
    int ans = 0;
    for (int i = 0; i < size; i++) {
      if (a[i] != b[i]) ans++;
    }
    cout << "Hamming distance is " << ans << ".\n";
  }
  return 0;
}