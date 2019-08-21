#include <bits/stdc++.h>
using namespace std;

int main() {
  int k; cin >> k;
  int w = 0, h = 0;
  int arr[6];
  for (int i = 0; i < 6; i++) {
    int tmp;
    cin >> tmp >> arr[i];
    i % 2 ? w = max(w, arr[i]) : h = max(h, arr[i]);
  }
  int pinew = 0, pineh = 0;
  for (int i = 0; i < 6; i++) {
    int tmp = arr[(i + 5) % 6] + arr[(i + 1) % 6];
    if (i % 2 && tmp == h) pinew = arr[i];
    else if (i % 2 == 0 && tmp == w) pineh = arr[i];
  }
  cout << k * (w * h - pinew * pineh);
  return 0;
}