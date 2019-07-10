#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
const ll INF = 2e9;
const ll MOD = 1e9+7;

int main() {
  int t;
  scanf("%d",&t);
  for(int i=1; i<=t; i++) {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
  }
  return 0;
}