#include <bits/stdc++.h>

using namespace std;

int main(){
  double A, B, C, D;
  scanf("%lf%lf%lf%lf", &A, &B, &C, &D);
  printf("%.4lf\n", sqrt((C-A)*(C-A)+ (D-B)*(D-B)));
}
