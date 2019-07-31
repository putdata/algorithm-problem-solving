#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int N;
  cin >> N;
  while(N--) {
    string a,b;
    cin >> a >> b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    cout << (a == b ? "Possible" : "Impossible") << '\n';
  }
  return 0;
}