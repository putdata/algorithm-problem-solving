#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, r; cin >> n >> l >> r;
  long long minSum = n - (l - 1), maxSum = 0;
  for (int i = 0, j = 2; i < l - 1; i++, j *= 2) {
    minSum += j;
  }
  long long j = 1;
  for (int i = 0; i < r; i++, j *= 2) maxSum += j;
  j /= 2;
  maxSum += j * (n - r);
  cout << minSum << ' ' << maxSum;
  return 0;
}