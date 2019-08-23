#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n; cin >> n;
  long long sum = 0;
  for (long long i = 1; i < n; i++) sum += n * i + i;
  cout << sum;
  return 0;
}