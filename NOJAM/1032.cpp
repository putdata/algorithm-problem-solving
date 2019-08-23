#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int size = s.size();
  for (int i = 0; i < n - 1; i++) {
    string a; cin >> a;
    for (int j = 0; j < size; j++)
      if (s[j] != a[j]) s[j] = '?';
  }
  cout << s;
  return 0;
}