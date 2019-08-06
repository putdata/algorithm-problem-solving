#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    if(prev_permutation(arr,arr+n)) {
        for(int i : arr)
            cout << i << ' ';
    } else cout << -1;
    return 0;
}