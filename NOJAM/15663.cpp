#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[10];
bool visit[10];
void foo(int y, string str) {
  if (y==M) {
    cout << str << '\n';
  } else {
    int b=0;
    for (int i=0; i<N; i++) {
      if(visit[i] || (i && b==arr[i])) continue;
      b=arr[i];
      visit[i]=1;
      foo(y+1,str+to_string(arr[i])+' ');
      visit[i]=0;
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