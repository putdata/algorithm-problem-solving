#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  getline(cin, a); getline(cin, b);
  int sizea = a.size(), sizeb = b.size();
  for (int i = 0; i < sizea; i++) {
    int tmp = (a[i] - b[i % sizeb] + 26) % 26;
    if (tmp == 0) tmp = 26;
    a[i] == ' ' ? cout << ' ' : cout << char(tmp + 'a' - 1);
  }
  return 0;
}