#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  vector<int> vec;
  int w, p; cin >> w >> p;
  vec.push_back(0); vec.push_back(w);
  for (int i = 0; i < p; i++) {
    int x; cin >> x;
    vec.push_back(x);
  }
  sort(vec.begin(), vec.end());
  int size = vec.size();
  vector<int> ans;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++)
      ans.push_back(vec[j] - vec[i]);
  }
  sort(ans.begin(), ans.end());
  auto unq = unique(ans.begin(), ans.end());
  for (auto it = ans.begin(); it != unq; it++) cout << *it << ' ';
  return 0;
}