#include <bits/stdc++.h>

using namespace std;

int main(){

  long long int a, b;

  while(scanf("%lld %lld", &a, &b) && (a || b)) {
    int r = 0;
    int c = 0;
    while(a || b) {
      c = (a%10 + b%10 + c) / 10;
      r += (c)? 1 : 0;
      a /= 10;
      b /= 10;
    }
    if(r == 1){
      printf("%d carry operation.\n", r);
    } else if (r){
      printf("%d carry operations.\n", r);
    } else {
      printf("No carry operation.\n");
    }
  }
  
}