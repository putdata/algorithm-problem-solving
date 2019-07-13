#include <bits/stdc++.h>
using namespace std;

int n,a[1000001],s[1000001],idx;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  for(int i=0; i<n; i++) cin >> a[i];
  s[0]=a[0];
  for(int i=0; i<n; i++) {
    if(s[idx]<a[i]) {
      s[++idx]=a[i];
    } else {
      *(lower_bound(s,s+idx,a[i]))=a[i];
    }
  }
  cout << idx+1;
  return 0;
}