#include <bits/stdc++.h>
using namespace std;

int main() {
  long long A, B;
  cin >> A >> B;
  if (A > B) swap(A, B);
  cout << (B * (B + 1) / 2) - (A * (A - 1) / 2);
  return 0;
}