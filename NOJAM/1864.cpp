#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, int> mab;
  mab['-'] = 0; mab['\\'] = 1; mab['('] = 2;
  mab['@'] = 3; mab['?'] = 4; mab['>'] = 5;
  mab['&'] = 6; mab['%'] = 7; mab['/'] = -1;
  int power[] = {1, 8, 64, 512, 4096, 32768, 262144, 2097152, 16777216};
  while (1) {
    string s; cin >> s;
    if (s == "#") break;
    int size = s.size();
    int sum = 0;
    for (int i = 0; i < size; i++)
      sum += mab[s[i]] * power[size - i - 1];
    cout << sum << '\n';
  }
  return 0;
}