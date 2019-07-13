#include <bits/stdc++.h>
using namespace std;

int n,a[1000001],s[1000001],idx;
stack<pair<int,int> > st;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  for(int i=0; i<n; i++) cin >> a[i];
  s[0]=a[0];
  for(int i=0; i<n; i++) {
    if(s[idx]<a[i]) {
      s[++idx]=a[i];
      st.push(make_pair(idx,a[i]));
    } else {
      int pos=lower_bound(s,s+idx,a[i])-s;
      s[pos]=a[i];
      st.push(make_pair(pos,a[i]));
    }
  }
  cout << idx+1 << '\n';
  stack<int> outs;
  while(idx>=0) {
    int tpos=st.top().first;
    int tval=st.top().second;
    st.pop();
    if(tpos==idx) {
      outs.push(tval);
      idx--;
    }
  }
  while(!outs.empty()) {
    int tmp=outs.top();
    outs.pop();
    cout << tmp << ' ';
  }
  return 0;
}