#include <bits/stdc++.h>
using namespace std;

typedef long long int64;

const int MAX = 1000000;
const int SIZE = 1 << (int) ceil(log2(MAX) + 1);

vector<int64> tree(SIZE);
void update(int node, int start, int end, int index, int val) {
  if (index < start || index > end) return;
  tree[node] += val;
  if (start != end) {
    int mid = (start + end) / 2;
    update(node * 2, start, mid, index, val);
    update(node * 2 + 1, mid + 1, end, index, val);
  }
}

int64 get(int node, int start, int end, int rank) {
  if (start == end) return start;

  int leftC = node * 2;
  int rightC = node * 2 + 1;
  int mid = (start + end) / 2;
  if (leftC <= SIZE && tree[leftC] >= rank)
    return get(leftC, start, mid, rank);
  if (rightC <= SIZE)
    return get(rightC, mid + 1, end, rank - tree[leftC]);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  while (n--) {
    int a, b, c;
    cin >> a >> b;
    if (a == 1) {
      int idx = get(1, 0, MAX - 1, b);
      cout << idx << '\n';
      update(1, 0, MAX - 1, idx, -1);
    } else {
      cin >> c;
      update(1, 0, MAX - 1, b, c);
    }
  }
  return 0;
}