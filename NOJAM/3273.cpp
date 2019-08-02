#include <bits/stdc++.h>
using namespace std;

int n,x,arr[100001],ans;
set<int> sat;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sat.insert(arr[i]);
    }
    cin >> x;
    for(int i=0; i<n; i++) {
        if(arr[i]!=x-arr[i] && sat.find(x-arr[i]) != sat.end()) {
            ans++;
            sat.erase(arr[i]);
            sat.erase(x-arr[i]);
        }
    }
    cout << ans;
    return 0;
}