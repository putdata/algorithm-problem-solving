#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  char s[n + 1][m + 1];
  pii r, b;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> s[i][j];
      if (s[i][j] == 'R') r = {i, j};
      else if (s[i][j] == 'B') b = {i, j};
    }
  }
  queue<tuple<pii, pii, int>> q;
  q.push({r, b, 1});
  while (!q.empty()) {
    auto [curR, curB, cnt] = q.front();
    q.pop();
    if (cnt > 10) break;
    {
      auto [rx, ry] = curR;
      auto [bx, by] = curB;
      bool rIn = 0, bIn = 0;
      while (1) {
        if (s[rx][ry + 1] == 'O') {
          rIn = 1;
          ry++;
        } else if(s[rx][ry + 1] != '#' && !(rx == bx && ry + 1 == by)) ry++;
        if (s[bx][by + 1] == 'O') {
          bIn = 1;
          by++;
        } else if(s[bx][by + 1] != '#' && !(rx == bx && ry == by + 1)) by++;
        if ((s[rx][ry + 1] == '#' || (rx == bx && ry + 1 == by)) && (s[bx][by + 1] == '#' || (rx == bx && ry == by + 1))) {
          if (rIn && !bIn && s[bx][by + 1] != 'O') {
            cout << cnt;
            return 0;
          } else if(!rIn && !bIn) q.push({{rx, ry}, {bx, by}, cnt + 1});
          break;
        }
      }
    }
    {
      auto [rx, ry] = curR;
      auto [bx, by] = curB;
      bool rIn = 0, bIn = 0;
      while (1) {
        if (s[rx][ry - 1] == 'O') {
          rIn = 1;
          ry--;
        } else if(s[rx][ry - 1] != '#' && !(rx == bx && ry - 1 == by)) ry--;
        if (s[bx][by - 1] == 'O') {
          bIn = 1;
          by--;
        } else if(s[bx][by - 1] != '#' && !(rx == bx && ry == by - 1)) by--;
        if ((s[rx][ry - 1] == '#' || (rx == bx && ry - 1 == by)) && (s[bx][by - 1] == '#' || (rx == bx && ry == by - 1))) {
          if (rIn && !bIn && s[bx][by - 1] != 'O') {
            cout << cnt;
            return 0;
          } else if(!rIn && !bIn) q.push({{rx, ry}, {bx, by}, cnt + 1});
          break;
        }
      }
    }
    {
      auto [rx, ry] = curR;
      auto [bx, by] = curB;
      bool rIn = 0, bIn = 0;
      while (1) {
        if (s[rx + 1][ry] == 'O') {
          rIn = 1;
          rx++;
        } else if(s[rx + 1][ry] != '#' && !(rx + 1 == bx && ry == by)) rx++;
        if (s[bx + 1][by] == 'O') {
          bIn = 1;
          bx++;
        } else if(s[bx + 1][by] != '#' && !(rx == bx + 1 && ry == by)) bx++;
        if ((s[rx + 1][ry] == '#' || (rx + 1 == bx && ry == by)) && (s[bx + 1][by] == '#' || (rx == bx + 1 && ry == by))) {
          if (rIn && !bIn && s[bx + 1][by] != 'O') {
            cout << cnt;
            return 0;
          } else if (!rIn && !bIn) q.push({{rx, ry}, {bx, by}, cnt + 1});
          break;
        }
      }
    }
    {
      auto [rx, ry] = curR;
      auto [bx, by] = curB;
      bool rIn = 0, bIn = 0;
      while (1) {
        if (s[rx - 1][ry] == 'O') {
          rIn = 1;
          rx--;
        } else if(s[rx - 1][ry] != '#' && !(rx - 1 == bx && ry == by)) rx--;
        if (s[bx - 1][by] == 'O') {
          bIn = 1;
          bx--;
        } else if(s[bx - 1][by] != '#' && !(rx == bx - 1 && ry == by)) bx--;
        if ((s[rx - 1][ry] == '#' || (rx - 1 == bx && ry == by)) && (s[bx - 1][by] == '#' || (rx == bx - 1 && ry == by))) {
          if (rIn && !bIn && s[bx - 1][by] != 'O') {
            cout << cnt;
            return 0;
          } else if(!rIn && !bIn) q.push({{rx, ry}, {bx, by}, cnt + 1});
          break;
        }
      }
    }
  }
  cout << -1;
  return 0;
}