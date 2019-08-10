#include <bits/stdc++.h>
using namespace std;

int foo(int x) {
	if(x == 0) return 1;
	return x * foo(x - 1);
}

int main() {
	int n,m; cin >> n >> m;
	cout << foo(n) / foo(m) / foo(n-m);
	return 0;
}