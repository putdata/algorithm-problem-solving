#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 1; i <= n; i++) {
    string s;
    cin >> s;
    int size = s.size();
    cout << "String #" << i << '\n';
    for (int j = 0; j < size; j++)
      cout << (char) ((s[j] - 'A' + 1) % 26 + 'A');
    i == n ? cout << '\n' : cout << "\n\n";
  }
  return 0;
}