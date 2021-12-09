#include <bits/stdc++.h>

using namespace std;

int main(){
  double A, B, C, S, R, R1, Delta;
  scanf("%lf%lf%lf", &A, &B, &C);
  S=(B*B)-4*A*C;
  if(S<0){
    printf("Impossivel calcular\n");
  }else{
    Delta= sqrt(S);
    R=((-B)+ Delta)/(2*A);
    R1=((-B)- Delta)/(2*A);
    if(2*A==0){
      printf("Impossivel calcular\n");
    }else{
      printf("R1 = %.5lf\nR2 = %.5lf\n",R, R1);
    }
  }
}
