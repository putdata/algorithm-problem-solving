#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    int ca[26]={}, cb[26]={}, ans=0;
    for(int l=a.size(), i=0; i<l; i++) ca[a[i]-'a']++;
    for(int l=b.size(), i=0; i<l; i++) cb[b[i]-'a']++;
    for(int i=0; i<26; i++) {
        ans+=abs(ca[i]-cb[i]);
    }
    cout << ans;
    return 0;
}