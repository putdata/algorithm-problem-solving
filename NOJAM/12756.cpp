#include <bits/stdc++.h>
using namespace std;

int main() {
  int aA, aL, bA, bL;
  cin >> aA >> aL >> bA >> bL;
  while (aL > 0 && bL > 0) {
    aL -= bA;
    bL -= aA;
  }
  if (aL < 1 && bL < 1) cout << "DRAW";
  else if (aL < 1) cout << "PLAYER B";
  else cout << "PLAYER A";
  return 0;
}