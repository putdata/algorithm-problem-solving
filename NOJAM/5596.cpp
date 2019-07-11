#include <bits/stdc++.h>
using namespace std;

int a,s,t;
int main() {
  for(int i=0; i<8; i++) {
    scanf("%d",&a);
    i<4?s+=a:t+=a;
  }
  printf("%d",s>t?s:t);
  return 0;
}