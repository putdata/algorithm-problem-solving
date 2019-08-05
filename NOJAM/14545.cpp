#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    while(n--) {
        long long num; cin >> num;
        cout << num*(num+1)*(2*num+1)/6 << '\n';
    }
    return 0;
}