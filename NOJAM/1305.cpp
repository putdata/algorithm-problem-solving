#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> f(n, 0);
	string s; cin >> s;
	for(int i = 1, j = 0; i < n; i++) {
		while(j > 0 && s[i] != s[j]) j = f[j - 1];
		if(s[i] == s[j]) f[i] = ++j;
	}
	cout << n - f[n - 1];
	return 0;
}