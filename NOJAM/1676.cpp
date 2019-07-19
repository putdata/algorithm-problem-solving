#include <bits/stdc++.h>
using namespace std;

int N,mult=1,ans;
int main() {
  cin >> N;
  for(int i=N; i>0; i--) {
    mult*=i;
    while(mult%10==0) {
      ans++;
      mult/=10;
    }
    mult%=1000000;
  }
  cout << ans;
  return 0;
}