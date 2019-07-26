#include <bits/stdc++.h>
using namespace std;

int X,a[6];
int main() {
  cin >> X;
  int i=0;
  while(X) {
    int t=X%10;
    a[i++]=t;
    X/=10;
  }
  reverse(a,a+i);
  if(next_permutation(a,a+i)) {
    for(int k=0; k<i; k++) cout << a[k];
  } else cout << 0;
  return 0;
}