#include <bits/stdc++.h>
using namespace std;

int n;
pair<int, int> p[100001];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  for(int i=0; i<n; i++) {
    int a,b;
    cin >> a >> b;
    p[i]=make_pair(b,a);
  }
  sort(p,p+n);
  for(int i=0; i<n; i++) {
    cout << p[i].second << ' ' << p[i].first << '\n';
  }
  return 0;
}