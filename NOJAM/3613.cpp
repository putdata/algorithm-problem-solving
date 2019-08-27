#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  string ans = "";
  int size = s.size();
  bool isC = 0, isJava = 0, isError = 0;
  for (int i = 0; i < size; i++) {
    if ('A' <= s[i] && s[i] <= 'Z') {
      if (i == 0 || isC) {
        isError = 1;
        break;
      }
      isJava = 1;
      ans.push_back('_');
      ans.push_back(s[i] - 'A' + 'a');
    }
    else if (s[i] == '_') {
      if (i == 0 || i == size - 1 || isJava || s[i + 1] == '_' || ('A' <= s[i + 1] && s[i + 1] <= 'Z')) {
        isError = 1;
        break;
      }
      isC = 1;
      ans.push_back(s[i++ + 1] - 'a' + 'A');
    }
    else ans.push_back(s[i]);
  }
  isError ? cout << "Error!" : cout << ans;
  return 0;
}