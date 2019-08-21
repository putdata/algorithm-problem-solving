#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e, f;
  scanf("%d:%d:%d", &a, &b, &c);
  scanf("%d:%d:%d", &d, &e, &f);
  int t1 = a * 3600 + b * 60 + c;
  int t2 = d * 3600 + e * 60 + f;
  if (t2 <= t1) t2 += 86400;
  t2 -= t1;
  printf("%02d:%02d:%02d", t2 / 3600, (t2 % 3600) / 60, t2 % 60);
  return 0;
}