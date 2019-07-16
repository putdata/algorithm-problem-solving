#include <bits/stdc++.h>
#define mp make_pair
#define se second
using namespace std;

int n;
pair<int, pair<int, pair<int, string> > > p[100001];
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  for(int i=0; i<n; i++) {
    int a,b,c;
    string s;
    cin >> s >> a >> b >> c;
    p[i]=mp(-a, mp(b, mp(-c,s)));
  }
  sort(p,p+n);
  for(int i=0; i<n; i++) {
    cout << p[i].se.se.se << '\n';
  }
  return 0;
}