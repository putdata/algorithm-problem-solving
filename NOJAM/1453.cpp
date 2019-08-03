#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,ans=0;
    cin >> n;
    bool sit[101]={};
    while(n--) {
        int a; cin >> a;
        if(sit[a]) ans++;
        sit[a]=1;
    }
    cout << ans;
    return 0;
}