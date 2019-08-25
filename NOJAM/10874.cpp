#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  for (int stu = 1; stu <= n; stu++) {
    int cnt = 0;
    for (int i = 1; i <= 10; i++) {
      int x; cin >> x;
      if (x == (i - 1) % 5 + 1) cnt++;
    }
    if (cnt == 10) cout << stu << '\n';
  }
  return 0;
}