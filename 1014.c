#include <stdio.h>
#include <stdlib.h>

int main()
{ double X, Y, S;
  scanf("%lf%lf", &X, &Y);
  S= X/Y;
  
  printf("%.3lf km/l\n", S);
       
  return 0;
}

