#include <bits/stdc++.h>
using namespace std;

int N,M,preS[100001];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=1; i<=N; i++) {
    cin >> preS[i];
    preS[i]+=preS[i-1];
  }
  while(M--) {
    int a,b;
    cin >> a >> b;
    cout << preS[b]-preS[a-1] << '\n';
  }
  return 0;
}