#include <bits/stdc++.h>
using namespace std;

int N,B;
stack<int> st;
int main() {
  cin >> N >> B;
  while(N) {
    int t=N%B;
    N/=B;
    st.push(t);
  }
  while(!st.empty()) {
    int t=st.top();
    st.pop();
    cout << (char)(t>9?t-10+'A':t+'0');
  }
  return 0;
}