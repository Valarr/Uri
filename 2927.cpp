#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,c,x,y;
  scanf("%d %d %d %d",&a,&c,&x,&y);
  if((a+x+y+1)<=c){
    printf("Igor feliz!\n");
  }
  else{
    if((y/2)<x){
      printf("Caio, a culpa eh sua!\n");
    }else{
      printf("Igor bolado!\n");
    }
  }
}
