#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string a, b;
  cin >> a >> b;
  int size = a.size();
  bool ok = true;
  for (int i = 0; i < size; i++)
    ok &= n % 2 ? a[i] != b[i] : a[i] == b[i];
  ok ? cout << "Deletion succeeded" : cout << "Deletion failed";
  return 0;
}