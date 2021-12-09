#include <stdio.h>
int quadSoma(int n){
  int quant=0,i=1;
  for(i=1;i<=n;i++){
    quant+= i*i;
  }
  return quant;
}

int main() {
  int n;
  while(scanf("%d",&n)){
    if(n==0) break;
    else printf("%d\n",quadSoma(n));
  }
  return 0;
}