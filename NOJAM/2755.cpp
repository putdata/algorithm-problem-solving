#include <bits/stdc++.h>
using namespace std;

map<string, double> mab;
int main() {
  mab["A+"] = 4.3; mab["A0"] = 4.0; mab["A-"] = 3.7;
  mab["B+"] = 3.3; mab["B0"] = 3.0; mab["B-"] = 2.7;
  mab["C+"] = 2.3; mab["C0"] = 2.0; mab["C-"] = 1.7;
  mab["D+"] = 1.3; mab["D0"] = 1.0; mab["D-"] = 0.7; mab["F"] = 0.0;
  int n; cin >> n;
  double total = 0, sum = 0;
  while (n--) {
    string a, c;
    double b;
    cin >> a >> b >> c;
    total += b * 1.0;
    sum += (b * 1.0) * mab[c];
  }
  cout.precision(2);
  cout << fixed << sum / total + 0.000001;
  return 0;
}