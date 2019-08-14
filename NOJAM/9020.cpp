#include <bits/stdc++.h>
using namespace std;

vector<int> vec;
vector<bool> chk(10001);
int main() {
  for(int i = 2; i < 10000; i++) {
    if (chk[i]) continue;
    vec.push_back(i);
    for (int j = i * i; j <= 10000; j += i)
      chk[j] = 1;
  }
  int T, cnt = vec.size();
  int a1, a2;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    for (auto it : vec) {
      if (it > n / 2) break;
      if(binary_search(vec.begin(), vec.end(), n - it)) {
        a1 = it;
        a2 = n - it;
      }
    }
    cout << a1 << ' ' << a2 << '\n';
  }
  return 0;
}