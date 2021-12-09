#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int  x, y, n;
  int  casos;

  scanf("%d",&casos);
  while (casos--)
    {
      scanf("%lld %lld", &x, &y);

      if (y > x)
      	printf("2\n");
      else{
        n = x / y + (x % y == 0 ? 0 : 1);
        printf("%lli\n", n);
      }
    }
}