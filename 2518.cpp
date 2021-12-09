#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
  int n;
  double h, c, l, hip;

while(scanf("%d",&n) != EOF ){
 scanf("%lf %lf %lf", &h, &c, &l);
 hip = sqrt((h*h)+(c*c));
 printf("%.4lf\n",n*(hip*l)/10000);
}
    return 0;
 }


