#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  int arr[2 * n], last = 0;
  bool jump = 1, plus = 1;
  arr[0] = 1;
  for (int i = 1; i < 2 * n; i++) {
    if (jump == 1) {
      if (plus) {
        arr[last + n] = i + 1;
        last = last + n;
        plus = 0;
      } else {
        arr[last - n] = i + 1;
        last = last - n;
        plus = 1;
      }
    } else {
      arr[last + 1] = i + 1;
      last = last + 1;
    }
    jump = !jump;
  }
  if (n % 2 == 1) {
    cout << "YES\n";
    for (int i = 0; i < 2 * n; i++)
      cout << arr[i] << ' ';
  } else cout << "NO";
  return 0;
}