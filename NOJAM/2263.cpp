#include <bits/stdc++.h>
using namespace std;

vector<int> in, post;
void foo(int inL, int inR, int postL, int postR) {
  if (inL >= inR) return;
  int last = post[postR - 1];
  cout << last << ' ';
  int idx;
  for (int i = inL; i < inR; i++) if (in[i] == last) {
    idx = i;
    break;
  }
  int diff = idx - inL;
  foo(inL, idx, postL, postL + diff);
  foo(idx + 1, inR, postL + diff, postR - 1);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  in.resize(n); post.resize(n);
  for (int i = 0; i < n; i++) cin >> in[i];
  for (int i = 0; i < n; i++) cin >> post[i];
  foo(0, n, 0, n);
  return 0;
}