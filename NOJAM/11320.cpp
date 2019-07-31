#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a,b;
        cin >> a >> b;
        int ta=a*a, tb=b*b;
        cout << ta/tb + (ta%tb?1:0) << '\n';
    }
    return 0;
}