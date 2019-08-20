#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, clu, file[1001]; cin >> n;
  long long ans = 0;
  for (int i = 0; i < n; i++) cin >> file[i];
  cin >> clu;
  for (int i = 0; i < n; i++) {
    ans += file[i] / clu * clu;
    if (file[i] % clu) ans += clu;
  }
  cout << ans;
  return 0;
}