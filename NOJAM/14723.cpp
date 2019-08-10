#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int line=0;
    while(line * (line+1) / 2 < n) ++line;
    int seq = n - (line * (line - 1) / 2);
    cout << line - (seq - 1) << " " << seq;
    return 0;
}