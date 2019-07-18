#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int ans;
bool c[MAX+1];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  for(int i=2; i*i<=MAX; i++) {
    if(c[i]) continue;
    for(int j=i*2; j<=MAX; j+=i) c[j]=1;
  }
  while(1) {
    int n;
    cin >> n;
    if(n==0) break;
    int flag=1;
    for(int i=3; i<=n/2; i++) {
      if(c[i]+c[n-i]==0) {
        cout << n << " = " << i << " + " << n-i << '\n';
        flag=0;
        break;
      }
    }
    if(flag) cout << "Goldbach's conjecture is wrong.\n";
  }
  return 0;
}