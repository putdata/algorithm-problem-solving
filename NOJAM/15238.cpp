#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int a[26]={};
    for(int i=0; i<n; i++) {
        char c; cin >> c;
        a[c-'a']++;
    }
    int ans=-10;
    char ca;
    for(int i=0; i<26; i++) {
        if(a[i]>ans) {
            ans=a[i];
            ca=i+'a';
        }
    }
    cout << ca << ' ' << ans;
    return 0;
}