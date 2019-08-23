#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    int x; cin >> x;
    if (x == -1) break;
    vector<int> vec;
    int sum = 0;
    for (int i = 1; i * i <= x; i++) {
      if (x % i == 0) {
        sum += i;
        vec.push_back(i);
        if (i != 1 && i != x / i) {
          sum += x / i;
          vec.push_back(x / i);
        }
      }
    }
    if (sum == x) {
      int size = vec.size();
      sort(vec.begin(), vec.end());
      cout << x << " = ";
      for (int i = 0; i < size - 1; i++) cout << vec[i] << " + ";
      cout << vec[size - 1] << '\n';
    } else cout << x << " is NOT perfect.\n";
  }
  return 0;
}