#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    while(N--) {
        int a; cin >> a;
        if(a==0) {
            if(pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        } else {
            pq.push(a);
        }
    }
    return 0;
}