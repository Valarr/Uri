#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   int N;
    double S, F, Q;
        scanf("%d %lf",&N, &Q);
        switch(N)
            {     case 1:
                  S=4.00;
                   break;
                  case 2:
                  S=4.50;
                   break;
                  case 3:
                  S=5.00;
                   break;
                  case 4:
                  S=2.00;
                   break;
                  case 5:
                  S=1.50;
                   break;
                  
            }
            F=S*Q;
           
           printf("Total: R$ %.2lf\n", F); 
        
  return 0;
}
