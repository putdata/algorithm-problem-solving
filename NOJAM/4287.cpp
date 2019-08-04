#include <bits/stdc++.h>
using namespace std;

int main() {
    while(1) {
        string a,b,c,ans;
        cin >> a;
        if(a=="#") break;
        cin >> b >> c;
        ans = a + ' ' + b + ' ' + c + ' ';
        for(int l=a.size(), i=0; i<l; i++) {
            char add = ((c[i]-'a') + ((b[i]-'a') - (a[i]-'a')) + 26)%26 + 'a';
            ans.push_back(add);
        }
        cout << ans << '\n';
    }
    return 0;
}