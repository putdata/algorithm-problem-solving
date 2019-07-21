#include <bits/stdc++.h>
using namespace std;

int n,a[8],ans=-1e9;
int main() {
  cin >> n;
  for(int i=0; i<n; i++) cin >> a[i];
  sort(a,a+n);
  do {
    int tot=0;
    for(int i=0; i<n-1; i++)
      tot+=abs(a[i]-a[i+1]);
    ans=max(ans,tot);
  } while(next_permutation(a,a+n));
  cout << ans;
  return 0;
}