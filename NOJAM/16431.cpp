#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int br, bc, dr, dc, jr, jc;
  cin >> br >> bc >> dr >> dc >> jr >> jc;
  int bx = abs(br - jr), by = abs(bc - jc), dx = abs(dr - jr), dy = abs(dc - jc);
  int bMove = bx + by - min(bx, by), dMove = dx + dy;
  if (bMove == dMove) cout << "tie";
  else if (bMove < dMove) cout << "bessie";
  else cout << "daisy";
  return 0;
}