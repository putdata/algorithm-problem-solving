#include <bits/stdc++.h>
using namespace std;

int A, B, X, Y, ans;
void foo(int a, int b, int x, int turn) {
  if (a > 10000000) return;
  if (x < 1) {
    ans = min(ans, turn);
    return;
  }
  int atk = b, hp = a, up = 0;
  while (1) {
    int tTurn = (x + atk - 1) / atk;
    if (hp - (tTurn - 1) * Y > 0)
      ans = min(ans, turn + tTurn + up);
    if (atk == atk + atk / 5 || atk > 1000000) break;
    atk = atk + atk / 5;
    hp -= 3 * Y;
    up++;
    if (hp < 1) break;
  }
  foo(a + a / 10, b, x - Y, turn + 1);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> A >> B >> X >> Y;
  ans = (X + Y - 1) / Y;
  foo(A, B, X, 0);
  cout << ans;
  return 0;
}