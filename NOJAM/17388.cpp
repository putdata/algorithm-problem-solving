#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, k, h;
  cin >> s >> k >> h;
  if (s + k + h > 99) cout << "OK";
  else {
    int m = min({s, k, h});
    if(s == m) cout << "Soongsil";
    else if (k == m) cout << "Korea";
    else cout << "Hanyang";
  }
  return 0;
}