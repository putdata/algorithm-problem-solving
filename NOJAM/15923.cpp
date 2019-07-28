#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int arr[N][2], ans=0;
  for(int i=0; i<N; i++) {
    cin >> arr[i][0] >> arr[i][1];
    if(i) ans+=abs(arr[i][0]-arr[i-1][0]) + abs(arr[i][1]-arr[i-1][1]);
  }
  ans+=abs(arr[N-1][0]-arr[0][0]) + abs(arr[N-1][1]-arr[0][1]);
  cout << ans;
  return 0;
}