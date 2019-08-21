#include <bits/stdc++.h>
using namespace std;

int main() {
  long long res = 0;
  char symbol;
  cin >> res;
  while (1) {
    string s;
    cin >> s;
    if (s == "=") {
      cout << res;
      break;
    } else if (s == "+" || s == "-" || s == "*" || s == "/") symbol = s[0];
    else {
      long long tmp = atoll(s.c_str());
      if (symbol == '+') res += tmp;
      else if (symbol == '-') res -= tmp;
      else if (symbol == '*') res *= tmp;
      else res /= tmp;
    }
  }
  return 0;
}