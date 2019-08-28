#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int k; cin >> k;
  string ans = "";
  for (int i = 0; i < k; i++) ans.push_back('1');
  for (int i = 0; i < k - 1; i++) ans.push_back('0');
  cout << ans;
  return 0;
}