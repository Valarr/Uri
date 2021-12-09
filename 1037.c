#include <stdio.h>
#include <stdlib.h>

int main()
{  double S;
   scanf("%lf", &S);
       if(S>=0 && S<=25)
           {printf("Intervalo [0,25]\n");}
       else if (S>25 && S<=50)
           {printf("Intervalo (25,50]\n");}
       else if (S>50 && S<=75)
           {printf("Intervalo (50,75]\n");}
       else if (S>75 && S<=100)
           {printf("Intervalo (75,100]\n");}
       else
           {printf("Fora de intervalo\n");}	
  return 0;
}
