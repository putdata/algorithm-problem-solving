#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    string a, b;
    cin >> a >> b;
    if (a == "E") break;
    int size = a.size();
    int p1 = 0, p2 = 0;
    for (int i = 0; i < size; i++) {
      if (a[i] == b[i]) continue;
      if (a[i] == 'R') b[i] == 'S' ? ++p1 : ++p2;
      if (a[i] == 'S') b[i] == 'P' ? ++p1 : ++p2;
      if (a[i] == 'P') b[i] == 'R' ? ++p1 : ++p2;
    }
    cout << "P1: " << p1 << '\n' << "P2: " << p2 << '\n';
  }
  return 0;
}