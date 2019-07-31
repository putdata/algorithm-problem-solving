#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    for(int i=N; i>0; i--) {
        string ans="";
        ans += to_string(i);
        if(i == 1) ans += " bottle";
        else ans += " bottles";
        ans += " of beer on the wall, ";
        ans += to_string(i);
        if(i == 1) ans += " bottle";
        else ans += " bottles";
        ans += " of beer.\nTake one down and pass it around, ";
        if(i-1 == 0) ans += "no more bottles of beer on the wall.";
        else {
            ans += to_string(i-1);
            if(i-1 == 1) ans += " bottle";
            else ans += " bottles";
            ans += " of beer on the wall.";
        }
        ans += "\n\n";
        cout << ans;
    }
    cout << "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, " << N << " bottle" << (N==1?"":"s") << " of beer on the wall.";
    return 0;
}