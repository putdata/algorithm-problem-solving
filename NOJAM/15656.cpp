#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[10],ans[10];
void foo(int y, string str) {
  if (y==M) {
    cout << str << '\n';
  } else {
    for (int i=0; i<N; i++) {
      foo(y+1,str+to_string(arr[i])+' ');
    }
  }
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr, arr+N);
  foo(0,"");
  return 0;
}