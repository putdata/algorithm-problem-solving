#include <bits/stdc++.h>
using namespace std;

int main() {
  double c;
  int k;
  cin >> c >> k;
  cout << int(round(c / pow(10, k)) * pow(10, k));
  return 0;
}