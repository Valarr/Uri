#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,b,q,r;
  scanf("%d %d",&a,&b);
  for(r=0;r<=abs(b);r++){
    if((a-r)%b==0) break;
  }
  printf("%d %d\n",(a-r)/b,r);
}
