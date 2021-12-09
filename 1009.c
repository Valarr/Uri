#include <stdio.h>
#include <stdlib.h>

int main()
{   char nome;
    double S, V, B;
    scanf("%s %lf %lf", &nome, &S, &V);
    B= S + (V*0.15);
   printf("TOTAL = R$ %.2lf\n", B);
  
  return 0;
}