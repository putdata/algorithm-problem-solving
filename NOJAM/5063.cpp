#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
const ll INF = 2e9;
const ll MOD = 1e9+7;

int main() {
  int n;
  scanf("%d",&n);
  while(n--) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    b-=c;
    if(a==b) printf("does not matter\n");
    else printf("%s\n",a>b?"do not advertise":"advertise");
  }
  return 0;
}