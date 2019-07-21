#include <bits/stdc++.h>
using namespace std;

int n,a,b,c;
int main() {
  cin >> n;
  if(n%10) {
    cout << -1;
    return 0;
  }
  a=n/300,n-=a*300;
  b=n/60,n-=b*60;
  c=n/10,n-=c*10;
  cout<<a<<' '<<b<<' '<<c;
  return 0;
}