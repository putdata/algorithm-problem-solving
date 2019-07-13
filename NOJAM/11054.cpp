#include <bits/stdc++.h>
using namespace std;

int n,a[1001],l[1001],s[1001],ans;
int main() {
  scanf("%d",&n);
  for(int i=0; i<n; i++) scanf("%d",a+i);
  for(int i=0; i<n; i++) {
    int lm=0, sm=0;
    for(int j=0; j<i; j++) {
      if(a[i]>a[j] && lm<l[j]) lm=l[j];
      if(a[n-i-1]>a[n-j-1] && sm<s[j]) sm=s[j];
    }
    l[i]=lm+1;
    s[i]=sm+1;
  }
  for(int i=0; i<n; i++) {
    if(ans<l[i]+s[n-i-1]) ans=l[i]+s[n-i-1];
  }
  printf("%d",ans-1);
  return 0;
}