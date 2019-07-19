#include <bits/stdc++.h>
using namespace std;

int n;
deque<int> q;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  while(n--) {
    int t; string s;
    cin >> s;
    if(s=="push_front") {
      cin >> t;
      q.push_front(t);
    } else if(s=="push_back") {
      cin >> t;
      q.push_back(t);
    } else if(s=="pop_front") {
      if(q.empty()) cout << "-1\n";
      else {
        cout << q.front() << '\n';
        q.pop_front();
      }
    } else if(s=="pop_back") {
      if(q.empty()) cout << "-1\n";
      else {
        cout << q.back() << '\n';
        q.pop_back();
      }
    } else if(s=="size") cout << q.size() << '\n';
      else if(s=="empty") cout << q.empty() << '\n';
      else if(s=="front") {
        if(q.empty()) cout << "-1\n";
        else cout << q.front() << '\n';
    } else if(s=="back") {
        if(q.empty()) cout << "-1\n";
        else cout << q.back() << '\n';
    }
  }
  return 0;
}