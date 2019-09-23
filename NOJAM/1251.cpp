#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string s; cin >> s;
  vector<string> vec;
  int len = s.size();
  for (int i = 1; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      string split[3];
      split[0] = s.substr(0, i);
      split[1] = s.substr(i, j - i);
      split[2] = s.substr(j, len - j);
      for (int k = 0; k < 3; k++) 
        reverse(split[k].begin(), split[k].end());
      vec.push_back(split[0] + split[1] + split[2]);
    }
  }
  sort(vec.begin(), vec.end());
  cout << vec[0];
  return 0;
}