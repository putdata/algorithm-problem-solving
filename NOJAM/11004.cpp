#include <bits/stdc++.h>
using namespace std;

int N,K,a[5000001];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> K;
  for(int i=0; i<N; i++) cin >> a[i];
  sort(a,a+N);
  cout << a[K-1];
  return 0;
}