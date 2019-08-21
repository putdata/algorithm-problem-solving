#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  while (n--) {
    string s; cin >> s;
    if (s == "P=NP") {
      cout << "skipped\n";
      continue;
    }
    int i = 0, size = s.size();
    int first = 0, second = 0;
    for (; s[i] != '+'; i++) {
      first *= 10;
      first += s[i] - '0';
    }
    for (i++; i < size; i++) {
      second *= 10;
      second += s[i] - '0';
    }
    cout << first + second << '\n';
  }
  return 0;
}