#include <bits/stdc++.h>
using namespace std;

int T;
bool prime[10000],vis[10000];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  for(int i=2; i*i<=10000; i++) {
    if(prime[i]) continue;
    for(int j=i*2; j<=10000; j+=i)
      prime[j]=1;
  }
  cin >> T;
  while(T--) {
    int a,b,n[4],ans=0; cin >> a >> b;
    bool found=0;
    queue<int> q;
    q.push(a);
    while(!q.empty()) {
      int s=q.size();
      while(s--) {
        int top=q.front();
        q.pop();
        if(top==b) {
          found=1;
          break;
        }
        for(int i=0; i<4; i++) {
          n[0]=top/1000;
          n[1]=(top%1000)/100;
          n[2]=(top%100)/10;
          n[3]=top%10;
          for(int j=(i?0:1); j<10; j++) {
            n[i]=j;
            int newN=n[0]*1000+n[1]*100+n[2]*10+n[3];
            if(!prime[newN] && !vis[newN]) {
              vis[newN]=1;
              q.push(newN);
            }
          }
        }
      }
      if(found) break;
      ans++;
    }
    found ? cout << ans : cout << "Impossible"; cout << '\n';
    fill(vis,vis+10000,0);
  }
  return 0;
}