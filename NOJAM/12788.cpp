#include <bits/stdc++.h>
using namespace std;

int N,M,K,tot,ctp[1001],cnt;
int main() {
  cin >> N >> M >> K;
  tot=M*K;
  for(int i=0; i<N; i++) cin >> ctp[i];
  sort(ctp,ctp+N,greater<int>());
  for(int i=0; i<N; i++) {
    cnt+=ctp[i];
    if(cnt>=tot) {
      cout << i+1;
      return 0;
    }
  }
  cout << "STRESS";
  return 0;
}