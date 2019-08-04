#include <bits/stdc++.h>
using namespace std;

int main() {
    int e,f,c,sum,ans=0;
    cin >> e >> f >> c;
    int bottle=e+f;
    while(bottle>=c) {
        bottle-=c;
        bottle+=1;
        ans++;
    }
    cout << ans;
    return 0;
}