#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  while (1) {
    getline(cin, s);
    if (s == "#") break;
    int size = s.size();
    int cnt = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < size; i++)
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') cnt++;
    cout << cnt << '\n';
  }
  return 0;
}