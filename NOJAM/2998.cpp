#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,ans=""; cin >> s;
    s="00"+s;
    reverse(s.begin(),s.end());
    for(int i=0; i<s.size()/3; i++)
        ans+=to_string((s[i*3]-'0')+(s[i*3+1]-'0')*2+(s[i*3+2]-'0')*4);
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;
}