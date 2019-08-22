#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  stack<int> st;
  int alen = a.size(), blen = b.size(), minlen = min(alen, blen);
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  for (int i = 0; i < minlen; i++) st.push(a[i] + b[i] - 2 * '0');
  for (int i = minlen; i < alen; i++) st.push(a[i] - '0');
  for (int i = minlen; i < blen; i++) st.push(b[i] - '0');
  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }
  return 0;
}