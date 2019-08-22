#include <bits/stdc++.h>
using namespace std;

int main() {
  for (int i = 6; i < 101; i++)
    for (int j = 2 ; j < i; j++)
      for (int k = j + 1; k < i; k++)
        for (int l = k + 1; l < i; l++)
          if (i * i * i == j * j * j + k * k * k + l * l * l)
            cout << "Cube = " << i << ", Triple = (" << j << ',' << k << ',' << l << ")\n";
  return 0;
}