#include <stdio.h>
#include <stdlib.h>

int main()
{ int N, X;
  scanf("%d", &N);
              while(N>0){
                   scanf("%d", &X);
                               if(X==0){
                                        printf("NULL\n");
                                        }
                               else if(X%2==0 && X!=0){
                                        printf("EVEN");
                                               if(X<0){
                                                       printf(" NEGATIVE\n");}
                                               else
                                                       {printf(" POSITIVE\n");
                                                       }              
                               }else{
                                    printf("ODD");
                                                if(X<0){
                                                       printf(" NEGATIVE\n");}
                                               else
                                                      { printf(" POSITIVE\n");
                                                       } 
                                    } 
                        
                        
                        
              N=N-1;          
    
    
    
}
  return 0;
}
