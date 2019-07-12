#include <bits/stdc++.h>
using namespace std;

int N,M,K;
int arr[10];
set<int> sat;
void foo(int y, string str) {
  if (y==M) {
    cout << str << '\n';
  } else {
    for (int i=0; i<K; i++) {
      foo(y+1,str+to_string(arr[i])+' ');
    }
  }
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> M;
  for(int i=0; i<N; i++) {
    int a;
    cin >> a;
    if(!sat.count(a)) {
      sat.insert(a);
      arr[K++]=a;
    }
  }
  sort(arr, arr+K);
  foo(0,"");
  return 0;
}