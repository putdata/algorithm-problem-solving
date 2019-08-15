#include <bits/stdc++.h>
using namespace std;

string song[] = {
  "baby", "sukhwan", "tururu", "turu",
  "very", "cute", "tururu", "turu",
  "in", "bed", "tururu", "turu",
  "baby", "sukhwan"
};
int main() {
  int n;
  cin >> n;
  int rep = (n - 1) / 14, seq = (n - 1) % 14;
  if (song[seq] == "tururu" || song[seq] == "turu") {
    int ru = song[seq] == "turu" ? 1 : 2;
    ru += rep;
    if (ru > 4) cout << "tu+ru*" << ru;
    else {
      string out = "tu";
      for (int i = 0; i < ru; i++) out += "ru";
      cout << out;
    }
  } else {
    cout << song[seq];
  }
  return 0;
}