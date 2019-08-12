#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, room[10]={};
    cin >> n;
    for (int i = 0; i < n; i++) {
      char c; cin >> c;
      if (c == 'L') {
        for (int i = 0; i < n; i++) {
          if (room[i]) continue;
          room[i] = 1;
          break;
        }
      }
      else if (c == 'R') {
        for (int i = 9; i > -1; i--) {
          if (room[i]) continue;
          room[i] = 1;
          break;
        }
      }
      else {
        room[c - '0'] = 0;
      }
    }
    for (int i = 0; i < 10; i++)
      cout << room[i];
    return 0;
}