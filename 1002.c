#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   double A, S;
    scanf("%lf",&A);
    S = (A*A) * 3.14159;
    printf("A=%.4lf\n", S);  
  
  return 0;
}