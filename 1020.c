#include <stdio.h>

int main( )
{ int S, A, M, D; 
      scanf("%d", &S);
      A = S / 365;
      M = (S % 365) / 30;
      D = (S % 365) %30;
      
      printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", A, M, D);
    return 0;
}