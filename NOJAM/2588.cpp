#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m[3];
  scanf("%d",&n);
  scanf("%1d%1d%1d",m,m+1,m+2);
  printf("%d\n%d\n%d\n%d",n*m[2],n*m[1],n*m[0],n*(m[2]+m[1]*10+m[0]*100));
  return 0;
}