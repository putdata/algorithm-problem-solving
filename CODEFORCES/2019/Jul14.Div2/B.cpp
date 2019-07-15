#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
const ll INF = 2e9;
const ll MOD = 1e9+7;

int T,a[50001],b[50001];
int main() {
  scanf("%d",&T);
  while(T--) {
    int n,m;
    char tmp;
    scanf("%d%d",&n,&m);
    char arr[n][m];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
        scanf(" %c",&tmp);
        arr[i][j]=tmp;
        if(tmp=='*') a[i]++,b[j]++;
      }
    }
    // for(int i=0; i<n; i++) {
    //   for(int j=0; j<m; j++)
    //     printf("%c",arr[i][j]);
    //   puts("");
    // }
    int ans=INF;
    for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
        int cnt=n-a[i]+m-b[j];
        if(arr[i][j]=='.') cnt--;
        if(ans>cnt) ans=cnt;
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}