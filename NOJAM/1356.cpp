#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  bool ok = false;
  int size = s.size();
  for (int i = 1; i < size; i++) {
    int front = 1, back = 1;
    for (int j = 0; j < i; j++) front *= s[j] - '0';
    for (int j = i; j < size; j++) back *= s[j] - '0';
    ok |= front == back;
  }
  ok ? cout << "YES" : cout << "NO";
  return 0;
}