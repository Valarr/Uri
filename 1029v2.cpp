#include <bits/stdc++.h>

using namespace std;

int n, coco;

int fib(int n){
  coco++;
  if(n<2){
    return n;
  }
  return fib(n-1)+fib(n-2);
}

int main() {
  int merda=0;
  scanf("%d",&merda);
  while(merda--){
    coco=0;
    scanf("%d",&n);
    int a = fib(n);
    printf("fib(%d) = %d calls = %d\n",n,coco-1,a);
  }
}
