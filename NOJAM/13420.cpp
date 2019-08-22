#include <bits/stdc++.h>
using namespace std;

typedef long long int64;

int64 foo(int64 x, char op, int64 y) {
  if (op == '+') return x + y;
  if (op == '-') return x - y;
  if (op == '*') return x * y;
  return x / y;
}

int main() {
  int t; cin >> t;
  while (t--) {
    int64 a, b, c;
    char m1, m2;
    cin >> a >> m1 >> b >> m2 >> c;
    foo(a, m1, b) == c ? cout << "correct\n" : cout << "wrong answer\n";
  }
  return 0;
}