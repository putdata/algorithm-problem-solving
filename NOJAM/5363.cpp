#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  cin.ignore();
  while (n--) {
    string s; getline(cin, s);
    int size = s.size(), tmp;
    for (int i = 0, cnt = 0; i < size; i++) {
      if (cnt < 2){
        if (s[i] == ' ') {
          cnt++;
          tmp = i;
        }
      }
      else cout << s[i];
    }
    cout << ' ';
    for (int i = 0; i < tmp; i++) cout << s[i];
    cout << '\n';
  }
  return 0;
}