#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n], sum = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int size = s.size();
    for (int j = 0; j < size; j++)
      if (s[j] == '0' || s[j] == '6') s[j] = '9';
    a[i] = atoi(s.c_str());
    if (a[i] > 100) a[i] = 100;
    sum += a[i];
  }
  cout << (int) round(sum * 1.0 / n);
  return 0;
}