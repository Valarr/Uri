#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
  int r, w, l;
  int i = 1;
  scanf("%d",&r);
  while(r!=0){
        r*=2;
      scanf("%d %d", &w, &l);
  if (w * w + l * l <= r*r){
    printf("Pizza %d fits on the table.\n",i);
  }
  else
    printf("Pizza %d does not fit on the table.\n",i);

  i++;
  scanf("%d",&r);
  }

    return 0;
 }


