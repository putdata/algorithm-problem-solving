#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
const ll INF = 2e9;
const ll MOD = 1e9+7;

int a,b,c,d,p;
int main() {
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&p);
  ll x=a*p;
  ll y=p<c?b:b+(p-c)*d;
  printf("%lld",x>y?y:x);
  return 0;
}