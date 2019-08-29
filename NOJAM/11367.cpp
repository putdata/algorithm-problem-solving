#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  while (n--) {
    string s;
    int score;
    cin >> s >> score;
    cout << s << ' ';
    if (score < 60) cout << "F\n";
    if (59 < score && score < 67) cout << "D\n";
    if (66 < score && score < 70) cout << "D+\n";
    if (69 < score && score < 77) cout << "C\n";
    if (76 < score && score < 80) cout << "C+\n";
    if (79 < score && score < 87) cout << "B\n";
    if (86 < score && score < 90) cout << "B+\n";
    if (89 < score && score < 97) cout << "A\n";
    if (96 < score) cout << "A+\n";
  }
  return 0;
}