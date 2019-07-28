#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  while(N--) {
    int last; cin >> last;
    int now, ans=0;
    while(1) {
      cin >> now;
      if(now==0) break;
      if(now > last*2) ans+=now - last*2;
      last=now;
    }
    cout << ans << '\n';
  }
  return 0;
}