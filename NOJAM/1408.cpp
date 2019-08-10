#include <bits/stdc++.h>
using namespace std;

void foo(int x) {
	cout << setw(2) << right << x;
}

int main() {
	int a, b, c, d, e, f;
	scanf("%d:%d:%d",&a, &b, &c);
	scanf("%d:%d:%d",&d, &e, &f);
	int t1 = a * 3600 + b * 60 + c;
	int t2 = d * 3600 + e * 60 + f;
	if (t1 > t2) t2 += 86400;
	t2 -= t1;
	cout.fill('0');
	foo(t2 / 3600); cout << ':'; foo((t2 % 3600) / 60); cout << ":"; foo(t2 % 60);
	return 0;
}