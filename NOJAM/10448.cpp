#include <bits/stdc++.h>
using namespace std;

bool t[100000];
int main() {
  vector<int> vec;
  for (int i = 1; i <= 50; i++) vec.push_back(i * (i + 1) / 2);
  for (int i = 0; i < 50; i++)
    for (int j = 0; j < 50; j++)
      for (int k = 0; k < 50; k++) t[vec[i] + vec[j] + vec[k]] = 1;
  int n;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    t[x] ? cout << "1\n" : cout << "0\n";
  }
  return 0;
}