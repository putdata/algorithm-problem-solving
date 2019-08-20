#include <bits/stdc++.h>
using namespace std;

bool prime[12345];
int main() {
  for (int i = 2; i <= 5000; i++) {
    if (prime[i]) continue;
    for (int j = i * i; j <= 5000; j += i) prime[j] = 1;
  }
  string s; cin >> s;
  int size = s.size(), sum = 0;
  for (int i = 0; i < size; i++) {
    if ('a' <= s[i] && s[i] <= 'z') sum += s[i] - 'a' + 1;
    else if ('A' <= s[i] && s[i] <= 'Z') sum += s[i] - 'A' + 27;
  }
  prime[sum] ? cout << "It is not a prime word." : cout << "It is a prime word.";
  return 0;
}