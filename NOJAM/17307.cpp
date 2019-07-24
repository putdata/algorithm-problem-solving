#include <bits/stdc++.h>
using namespace std;

int N,C,arr[250001];
long long s[250001][2], ans[2]={(long long)1e18,0};
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> C;
  for(int i=1; i<=N; i++) {
    cin >> arr[i];
    s[i][0]=s[i-1][0]+(arr[i]-arr[i-1]+C)%C;
    s[i][1]=s[i-1][1]+(arr[i-1]-arr[i]+C)%C;

  }
  for(int i=1; i<=N; i++) {
    long long m=max(s[N][0]-s[i][0],s[i][1]-s[1][1]);
    if(m<ans[0]) {
      ans[0]=m;
      ans[1]=i;
    }
  }
  cout << ans[1] << '\n' << ans[0];
  return 0;
}