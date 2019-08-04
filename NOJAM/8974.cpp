#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,ans=0;
    short seq[5001]={0,};
    for(int i=1, j=0; i<50; i++) {
        for(int k=0; k<i; k++)
            seq[++j]=i;
    }
    cin >> a >> b;
    for(int i=a; i<=b; i++) ans+=seq[i];
    cout << ans;
    return 0;
}