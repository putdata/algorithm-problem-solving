#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;

vector<int> tree(MAX * 4);

void update(int node, int start, int end, int index, int val) {
  if (index < start || index > end) return;
  tree[node] += val;
  if (start == end) return;
  int mid = (start + end) / 2;
  update(node * 2, start, mid, index, val);
  update(node * 2 + 1, mid + 1, end, index, val);
}

int get(int node, int start, int end, int rank) {
  if (start == end) {
    return start;
  }
  int leftC = node * 2;
  int mid = (start + end) / 2;
  if (tree[leftC] >= rank) return get(leftC, start, mid, rank);
  else return get(leftC + 1, mid + 1, end, rank - tree[leftC]);
}

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int n;
  cin >> n;
  int arr[n], seq[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[n - i - 1];
    update(1, 0, n - 1, i, 1);
  }
  for (int i = 0; i < n; i++) {
    int idx = get(1, 0, n - 1, arr[i] + 1);
    update(1, 0, n - 1, idx, -1);
    seq[n - idx - 1] = n - i;
  }
  for (int i = 0; i < n; i++) cout << seq[i] << ' ';
  return 0;
}