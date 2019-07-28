#include <bits/stdc++.h>
using namespace std;

int T;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> T;
  while(T--) {
    set<string> sat;
    int n;
    cin >> n;
    while(n--) {
      string s;
      cin >> s;
      sat.insert(s);
    }
    cout << sat.size() << '\n';
  }
  return 0;
}