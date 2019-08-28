#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string s; cin >> s;
  int size = s.size();
  int a[26] = {};
  priority_queue<int> pq;
  int have = 0, ans = 0;
  for (int i = 0; i < size; i++) a[s[i] - 'a']++;
  for (int i = 0; i < 26; i++) {
    if (a[i] > 0) {
      pq.push(-a[i]);
      have++;
    }
  }
  while (have > 2) {
    ans += -pq.top();
    pq.pop();
    have--;
  }
  cout << ans;
  return 0;
}