#include <bits/stdc++.h>

using namespace std;

int n;
int bosta[40], coco[40];

int fib(int n){
  if(bosta[n]==-1){
    if(n<2){
      bosta[n] = n;
      coco[n] = 1;
      return n;
    }
    bosta[n] = fib(n-1)+fib(n-2);
    coco[n] = coco[n-1]+coco[n-2]+1;
  }
  return bosta[n];
}

int main() {
  int merda=0;
  scanf("%d",&merda);
  while(merda--){
    memset(bosta,-1,sizeof(bosta));
    scanf("%d",&n);
    int a = fib(n);
    printf("fib(%d) = %d calls = %d\n",n,coco[n]-1,a);
  }
}
