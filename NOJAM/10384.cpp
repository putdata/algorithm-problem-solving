#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 1; i <= n; i++) {
    string s;
    getline(cin, s);
    int size = s.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int alpha[26] = {};
    for (int j = 0; j < size; j++) {
      if ('a' <= s[j] && s[j] <= 'z')
        alpha[s[j] - 'a']++;
    }
    int mini = 1e9;
    for (int j = 0; j < 26; j++) mini = min(mini, alpha[j]);
    cout << "Case " << i << ": ";
    if (mini == 0) cout << "Not a pangram\n";
    else if (mini == 1) cout << "Pangram!\n";
    else if (mini == 2) cout << "Double pangram!!\n";
    else cout << "Triple pangram!!!\n";
  }
  return 0;
}