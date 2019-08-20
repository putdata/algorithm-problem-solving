#include <bits/stdc++.h>
using namespace std;

int main() {
  long long sum = 0, now =0;
  string s;
  while (cin >> s) {
    int size = s.size();
    for (int i = 0; i < size; i++) {
      if (s[i] == ',') {
        sum += now;
        now = 0;
        continue;
      }
      now *= 10;
      now += s[i] - '0';
    }
  }
  sum += now;
  cout << sum;
  return 0;
}