#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    while(N--) {
        int a,b; cin >> a >> b;
        if(a!=b && a-2!=b) {
            cout << "No Number\n";
            continue;
        }
        a%2 ? cout << a+b-1 : cout << a+b;
        cout << '\n';
    }
    return 0;
}