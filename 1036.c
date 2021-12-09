#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ double A, B, C, S, R, RS, Delta;
scanf("%lf%lf%lf", &A, &B, &C);
 S=(B*B)-4*A*C;
 //printf("%lf\n",S);
  if (S<0) 
    { printf("Impossivel calcular\n");}
  
  else 
      {  Delta= sqrt(S);
        R=((-B)+ Delta)/(2*A);
        RS=((-B)- Delta)/(2*A);
        if (2*A==0)
           { printf("Impossivel calcular\n");}
        else
            {printf("R1 = %.5lf\nR2 = %.5lf\n",R, RS);}
      }
  return 0;
}
