#include <bits/stdc++.h>

using namespace std;

int main(){
  double a,b;
  scanf("%lf%lf",&a,&b);
  if(a==1){a=b*4;}
  else if(a==2){a=b*4.5;}
  else if(a==3){a=b*5;}
  else if(a==4){a=b*2;}
  else{a=b*1.5;}
  printf("Total: R$ %.2lf\n",a);
}
