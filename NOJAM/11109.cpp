#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int d, n, s, p;
    cin >> d >> n >> s >> p;
    int paral = d + n * p, noParal = n * s;
    if (paral == noParal) cout << "does not matter\n";
    else if (paral > noParal) cout << "do not parallelize\n";
    else cout << "parallelize\n";
  }
  return 0;
}