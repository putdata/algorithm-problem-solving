#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, w, h;
  cin >> n >> w >> h;
  while (n--) {
    int x;
    cin >> x;
    x * x <= w * w + h * h ? cout << "DA\n" : cout << "NE\n";
  }
  return 0;
}