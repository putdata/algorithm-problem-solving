#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    regex reg("(100+1+|01)+");
    cmatch m;
    int T; cin >> T;
    while(T--) {
        string s; cin >> s;
        regex_match(s.c_str(),m,reg) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}