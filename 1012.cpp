#include <bits/stdc++.h>
using namespace std;

int main(){
  double a,b,c;
  scanf("%lf%lf%lf",&a,&b,&c);
  printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",(a*c)/2,c*c*3.14159,((a+b)/2)*c,b*b,a*b);
}
