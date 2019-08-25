#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; getline(cin, s);
  int size = s.size();
  int happy = 0, sad = 0;
  int padding = size % 3;
  if (!padding) padding = 3;
  size += 3 - padding;
  for (int i = padding; i < 3; i++) s += "=";
  for (int i = 0; i < size - 2; i++) {
    if (s[i] == ':' && s[i + 1] == '-') {
      if (s[i + 2] == ')') happy++;
      else if (s[i + 2] == '(') sad++;
    }
  }
  if (happy + sad == 0) cout << "none";
  else if (happy == sad) cout << "unsure";
  else if (happy > sad) cout << "happy";
  else cout << "sad";
  return 0;
}