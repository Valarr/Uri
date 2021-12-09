#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,b,c;
  scanf("%d / %d / %d", &a,&b,&c);
  printf("%02d/%02d/%02d\n", b,a,c);
  printf("%02d/%02d/%02d\n", c,b,a);
  printf("%02d-%02d-%02d\n", a,b,c);
}