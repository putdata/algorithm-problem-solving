#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    cin.ignore();
    while(T--) {
        string s;
        getline(cin, s);
        char now = s[0];
        int cnt=1, len = s.length();
        for(int i=1; i<len; i++) {
            if(s[i]==now) cnt++;
            else {
                cout << cnt << ' ' << now << ' ';
                now=s[i]; cnt=1;
            }
        }
        cout << cnt << ' ' << now << '\n';
    }
    return 0;
}