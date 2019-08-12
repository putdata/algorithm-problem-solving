#include <bits/stdc++.h>
using namespace std;

int tree[26][2];
void pre(int node) {
  cout << (char) (node + 'A');
  if (tree[node][0] != -1) pre(tree[node][0]);
  if (tree[node][1] != -1) pre(tree[node][1]);
}
void in(int node) {
  if (tree[node][0] != -1) in(tree[node][0]);
  cout << (char) (node + 'A');
  if (tree[node][1] != -1) in(tree[node][1]);
}
void post(int node) {
  if (tree[node][0] != -1) post(tree[node][0]);
  if (tree[node][1] != -1) post(tree[node][1]);
  cout << (char) (node + 'A');
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  memset(tree, -1, sizeof(tree));
  for (int i = 0; i < n; i++) {
    char node, le, ri;
    cin >> node >> le >> ri;
    if (le != '.') tree[node - 'A'][0] = le - 'A';
    if (ri != '.') tree[node - 'A'][1] = ri - 'A';
  }
  pre(0); cout << '\n'; in(0); cout << '\n'; post(0);
  return 0;
}