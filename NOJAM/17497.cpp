#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  long long n; cin >> n;
  vector<char> vec;
  int cnt = 0;
  while (n) {
    if (++cnt > 99) break;
    if (n - 2 == 0) {
      vec.push_back('+');
      break;
    }
    if ((n / 2) % 2) {
      vec.push_back('+');
      n -= 2;
    } else if ((n / 2) != 0 && n % 2 == 0) {
      vec.push_back('*');
      n /= 2;
    } else {
      vec.push_back('/');
      n *= 2;
    }
  }
  reverse(vec.begin(), vec.end());
  cout << vec.size() << '\n';
  for (auto it : vec) cout << '[' << it << "] ";
  return 0;
}