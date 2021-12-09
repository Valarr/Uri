#include <bits/stdc++.h>

using namespace std;

const long long hack = 100000000;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long a, b;
  while (cin >> a >> b) {
    long long restinho = 1;
    for (long long i = 0; i < b; ++i) {
      restinho *= a - i;
      while ((restinho % 10) == 0){
        restinho /= 10;
      }
      restinho %= hack;
      }
    cout << (restinho % 10) << "\n";
  }
}