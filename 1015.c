#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ double A, B, C, D, E, F, S;
         scanf("%lf%lf%lf%lf", &A, &B, &C, &D);
         E = (C-A)*(C-A);
         F = (D-B)*(D-B);
         S = E+F;
         S = sqrt(S);
         printf("%.4lf\n", S);
  
  return 0;
}
