#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second

int N,K,ans;
queue<pair<int,int> > q;
bool vis[200001];
int main() {
  cin >> N >> K;
  ans=abs(N-K);
  q.push({N,0}); vis[N]=1;
  while(!q.empty()) {
    pair<int,int> top=q.front();
    q.pop();
    if(top.fi==K) {
      cout << top.se;
      break;
    }
    if(top.fi!=0 && !vis[top.fi-1]) {
      vis[top.fi-1]=1;
      q.push({top.fi-1,top.se+1});
    }
    if(!vis[top.fi+1]) {
      vis[top.fi+1]=1;
      q.push({top.fi+1,top.se+1});
    }
    if(top.fi<=100000 && !vis[top.fi*2]) {
      vis[top.fi*2]=1;
      q.push({top.fi*2,top.se+1});
    }
  }
  return 0;
}