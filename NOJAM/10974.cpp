#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) a[i]=i+1;
    do {
        for(int i=0; i<n; i++)
            cout << a[i] << ' ';
        cout << '\n';
    } while(next_permutation(a,a+n));
    return 0;
}