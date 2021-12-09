#include <stdio.h>
#include <stdlib.h>

int main( ){ 
    int S, C, N, M, B;
    scanf("%d", &C);
    while(C > 0){
            scanf("%d", &N);
            if(N % 2 == 1){
                 printf("1\n");
            }else{
                  printf("0\n");
            }
            C = C - 1;
    }
  return 0;
  
}
