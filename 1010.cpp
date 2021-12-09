#include <bits/stdc++.h>
using namespace std;

int main(){
  double a,b,c,d,x,y;
  scanf("%lf%lf%lf",&a,&b,&x);
  scanf("%lf%lf%lf",&c,&d,&y);
  printf("VALOR A PAGAR: R$ %0.2lf\n",(b*x)+(d*y));
}
