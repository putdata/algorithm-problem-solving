#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

ll A,B;
ll gcd(ll x, ll y) {
  if(x==0) return y;
  return gcd(y%x, x);
}
int main() {
  cin >> A >> B;
  if(A>B) swap(A,B);
  for(ll i=0; i<gcd(A,B); i++) printf("1");
  return 0;
}