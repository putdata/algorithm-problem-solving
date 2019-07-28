#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
  if(y==0) return x;
  return gcd(y, x%y);
}
int main() {
  int n, fir;
  cin >> n >> fir;
  for(int i=1; i<n; i++) {
    int a, gcdN;
    cin >> a;
    gcdN=gcd(fir,a);
    cout << fir/gcdN << '/' << a/gcdN << '\n';
  }
  return 0;
}