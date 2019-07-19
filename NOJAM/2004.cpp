#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,m;
pair<ll,ll> a,b,c;

void foo(pair<ll,ll> *v,ll x) {
  ll t=0,f=0;
  for(ll i=2; i<=x; i*=2) t+=x/i;
  for(ll i=5; i<=x; i*=5) f+=x/i;
  *v={t,f};
}

int main() {
  cin >> n >> m;
  foo(&a,n),foo(&b,m),foo(&c,n-m);
  cout << min(a.first-b.first-c.first,a.second-b.second-c.second);
  return 0;
}