#include <bits/stdc++.h>
using namespace std;

const string a = "ABC";
const string b = "BABC";
const string c = "CCAABB";
int main() {
  int n; cin >> n;
  int coA, coB, coC; coA = coB = coC = 0;
  for (int i = 0; i < n; i++) {
    char x; cin >> x;
    coA += a[i % 3] == x;
    coB += b[i % 4] == x;
    coC += c[i % 6] == x;
  }
  int maxi = max({coA, coB, coC});
  cout << maxi << '\n';
  if (coA == maxi) cout << "Adrian\n";
  if (coB == maxi) cout << "Bruno\n";
  if (coC == maxi) cout << "Goran";
  return 0;
}