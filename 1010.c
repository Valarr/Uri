#include <stdio.h>
#include <stdlib.h>

int main()
{   double A, B, C, D, E, F, G, H, S;
    scanf("%lf%lf%lf%lf%lf%lf", &A, &B, &C, &E, &F, &G);
  
    D= B*C;
    H= F*G;
    S= D+H;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", S);    
    
  return 0;
}
