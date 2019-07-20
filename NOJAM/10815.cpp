#include <bits/stdc++.h>
using namespace std;

int N,M,arr[500001];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr,arr+N);
  cin >> M;
  while(M--) {
    int t;
    cin >> t;
    cout << binary_search(arr,arr+N,t) << ' ';
  }
  return 0;
}