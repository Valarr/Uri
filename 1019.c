#include <stdio.h>
#include <stdlib.h>

int main()
{ int H, M, S, N;
  scanf("%d",&N);
  H=N/(60*60);
  M=(N-((60*60)*H))/60;
  S=N%60;
  
  printf("%d:%d:%d\n", H,M,S);
  
  return 0;
}
