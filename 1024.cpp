#include <bits/stdc++.h>
using namespace std;

#define max 1001 

int main(){
  int a=0, c=0, r=0;
  char b[max], besta[max];
  int aux =0;
  scanf("%d",&a);
  getchar();
  while(a--){
    fgets(b,max,stdin);
    int len = strlen(b)-1;
    b[len] = '\0';
    //1
    for(int i=0;i<len;i++){
      if((b[i]>64 && b[i]<91) || (b[i]>96 && b[i]<123)){
	b[i]+=3;
      }
      }
    //2
    int j=0;
    c = strlen(b);
    for(;j<c;j++){
      besta[c-j-1] = b[j];
    }
    besta[j]='\0';
    //3
    r = ceil(c/2);
    for(;r<c;r++){
      besta[r]-=1;
    }
    printf("%s\n",besta);
  }
}
