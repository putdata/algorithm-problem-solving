#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int score = 0;
  for (int i = 0; i < n; i++) {
    score += s[i] - 'A' + 1;
  }
  cout << score;
  return 0;
}