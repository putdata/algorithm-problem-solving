#include <bits/stdc++.h>
using namespace std;

int main() {
	for(int i = 0; i < 3; i++) {
		int a,b,c,d,e,f;
		cin >> a >> b >> c >> d >> e >> f;
		int t1 = a * 3600 + b * 60 + c;
		int t2 = d * 3600 + e * 60 + f;
		t2 = (t2 - t1 + 86400) % 86400;
		cout << t2 / 3600 << " " << (t2 % 3600) / 60 << " " << (t2 % 60) << "\n";
	}
	return 0;
}