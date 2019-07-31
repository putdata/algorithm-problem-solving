#include <bits/stdc++.h>
using namespace std;

int T;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
        string s;
        stack<char> stA, stB;
        cin >> s;
        for(char it : s) {
            if(it == '<') {
                if(stA.empty()) continue;
                stB.push(stA.top());
                stA.pop();
            } else if(it == '>') {
                if(stB.empty()) continue;
                stA.push(stB.top());
                stB.pop();
            } else if(it == '-') {
                if(stA.empty()) continue;
                stA.pop();
            } else stA.push(it);
        }
        string ans="";
        while(!stA.empty()) {
            ans.push_back(stA.top());
            stA.pop();
        }
        reverse(ans.begin(),ans.end());
        while(!stB.empty()) {
            ans.push_back(stB.top());
            stB.pop();
        }
        cout << ans << '\n';
    }
    return 0;
}