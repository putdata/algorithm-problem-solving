#include <bits/stdc++.h>
using namespace std;

string s;
vector<bool> chk(1000001, 0);
vector<int> prime;
bool foo(int x) {
  int size = s.size();
  int remain = 0;
  for (int i = 0; i < size; i++)
    remain = (remain * 10 + s[i] - '0') % x;
  return remain ? false : true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int k;
  cin >> s >> k;
  for (int i = 2; i < k; i++) {
    if (chk[i]) continue;
    prime.push_back(i);
    for (int j = i * 2; j < k; j += i) chk[j] = 1;
  }
  for (auto it : prime) {
    if (foo(it)) {
      cout << "BAD " << it;
      return 0;
    }
  }
  cout << "GOOD";
  return 0;
}