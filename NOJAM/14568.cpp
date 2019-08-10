#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, ans = 0; cin >> n;
	for(int i = 3; i <= n; i++) {
		for(int j = i - 2; j > 0; j--) {
			int tak = n - i - j;
			if(tak > 0 && tak % 2 == 0) ans++;
		}
	}
	cout << ans;
	return 0;
}