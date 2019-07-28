#include <bits/stdc++.h>
using namespace std;
typedef pair<string,string> pss;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while(1) {
    int n; cin >> n;
    if(n==0) break;
    priority_queue<pss,vector<pss>,greater<pss>> pq;
    while(n--) {
      string s,tmpS;
      cin >> s;
      tmpS.resize(s.size());
      transform(s.begin(),s.end(),tmpS.begin(), ::toupper);
      pq.push({tmpS,s});
    }
    cout << pq.top().second << '\n';
  }
  return 0;
}