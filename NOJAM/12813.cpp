#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string a, b;
  cin >> a >> b;
  int size = a.size();
  for (int i = 0; i < size; i++) a[i] == b[i] ? cout << a[i] : cout << 0;
  cout << '\n';
  for (int i = 0; i < size; i++) a[i] == '1' || b[i] == '1' ? cout << 1 : cout << 0;
  cout << '\n';
  for (int i = 0; i < size; i++) a[i] == b[i] ? cout << 0 : cout << 1;
  cout << '\n';
  for (int i = 0; i < size; i++) a[i] == '1' ? cout << 0 : cout << 1;
  cout << '\n';
  for (int i = 0; i < size; i++) b[i] == '1' ? cout << 0 : cout << 1;
  return 0;
}