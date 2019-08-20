#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    string x;
    cin >> x;
    if (x == "0") break;
    while (x.size() > 1) {
      int t = 0;
      int size = x.size();
      for (int i = 0; i < size; i++) t += x[i] - '0';
      x = to_string(t);
    }
    cout << x << '\n';
  }
  return 0;
}