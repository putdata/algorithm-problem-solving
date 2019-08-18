#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  cin >> a;
  if (a == "0") {
    cout << 1;
    return 0;
  }
  int size = a.size();
  int over = 0;
  for (int i = 0; i < size; i++)
    over += pow(10, i);
  if (atoi(a.c_str()) < over) cout << size - 1;
  else cout << size;
  return 0;
}