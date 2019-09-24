#include <bits/stdc++.h>
using namespace std;

long long foo(string a) {
  stack<int> st;
  long long ret = 0;
  for (int i = 0; i < a.size(); i++) {
    if (!st.size()) ret++;
    if (a[i] == '(') st.push(i);
    else if (a[i] == ')') {
      if (st.size() == 1) {
        ret -= 2;
        long long rec = foo(a.substr(st.top() + 1, i - st.top() - 1));
        ret += rec * (a[st.top() - 1] - '0');
        st.pop();
      } else st.pop();
    }
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string s; cin >> s;
  cout << foo(s);
  return 0;
}