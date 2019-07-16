#include <bits/stdc++.h>
using namespace std;

int N,K,cnt;
queue<int> que;
int main() {
  cin >> N >> K;
  for(int i=1; i<=N; i++) que.push(i);
  cout << '<';
  while(que.size()!=1) {
    int t=que.front();
    que.pop();
    if(++cnt==K) {
      cout << t << ", ";
      cnt=0;
    } else que.push(t);
  }
  cout << que.front() << '>';
  return 0;
}