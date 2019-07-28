#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,ans=0;
  cin >> N;
  while(N>9) {
    int t=N,mult=1;
    while(t) {
      mult*=t%10;
      t/=10;
    }
    N=mult;
    ans++;
  }
  cout << ans;
  return 0;
}