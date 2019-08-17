#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  while (scanf("%d%d", &n, &k) != -1) {
    long long ate = n;
    while (n / k) {
      ate += n / k;
      n = n / k + n % k;
    }
    printf("%lld\n", ate);
  }
  return 0;
}