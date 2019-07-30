#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,ans=0;
  cin >> N;
  for(int i=1; i*i<=N; i++) {
    if(N%i==0) N/i==i?++ans:ans+=2;
  }
  cout << ans;
  return 0;
}