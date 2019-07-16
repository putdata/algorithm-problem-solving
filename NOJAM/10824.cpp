#include <bits/stdc++.h>
using namespace std;

long long a,b,c,d;
int foo(int x) {
  int cnt=0;
  while(x) {
    cnt++;
    x/=10;
  }
  return cnt;
}
int main() {
  cin >> a >> b >> c >> d;
  printf("%lld",a*(long long)pow(10,foo(b))+b + c*(long long)pow(10,foo(d))+d);
  return 0;
}