#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  stack<int> st;
  while (t) {
    st.push(t % 9);
    t /= 9;
  }
  while (!st.empty()){
    cout << st.top();
    st.pop();
  }
  return 0;
}