#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int cnt = 1;
  for (int i = 0; i < n; i++) {
    cnt++;
    if (s[i] == 'L') i++;
  }
  cout << min(cnt, n);
  return 0;
}