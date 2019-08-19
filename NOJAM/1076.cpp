#include <bits/stdc++.h>
using namespace std;

const string OHM[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
int main() {
  string ans = "";
  for (int i = 0; i < 3; i++) {
    string a;
    cin >> a;
    long long value;
    for (int j = 0; j < 10; j++) {
      if (a == OHM[j]) value = j;
    }
    if (i == 2) cout << atoll(ans.c_str()) * (long long) pow(10LL, value);
    else ans.push_back(value + '0');
  }
  return 0;
}