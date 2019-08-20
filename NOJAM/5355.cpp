#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  cout.precision(2);
  while (t--) {
    double n; cin >> n;
    cin.ignore();
    string s;
    getline(cin ,s);
    int size = s.size();
    for (int i = 0; i < size; i++) {
      if (s[i] == ' ') continue;
      if (s[i] == '@') n *= 3.0;
      else if (s[i] == '%') n += 5.0;
      else n -= 7.0;
    }
    cout << fixed << n << '\n';
  }
  return 0;
}