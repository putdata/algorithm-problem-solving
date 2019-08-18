#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    int h; cin >> h;
    string s; cin >> s;
    int size = s.size();
    for(int j = 0; j < size; j++) {
      --h;
      if (s[j] == 'c') h += 2;
    }
    cout << "Data Set " << i << ":\n";
    cout << h;
    if (i != t) cout << "\n\n";
  }
  return 0;
}