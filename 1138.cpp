#include <bits/stdc++.h>

using namespace std;

int a, b;

long long digits(int n, int d) {
  long long res = 0, pot = 1, rem = 0;
  while (n) {
    int x = n%10;
    n /= 10;

    if (x > d) res += (n+1)*pot;
    else res += n*pot;
    if (x == d) res += rem+1;

    if (d == 0) res -= pot;

    rem += pot * x;
    pot *= 10;
  }
  return res;
}

int main() {
  while (scanf("%d%d", &a, &b) && a!=0) {
    for (int i = 0; i < 10; ++i)
      printf("%lld%c", digits(b, i) - digits(a-1, i), i==9?'\n':' ');
  }
  return 0;
}