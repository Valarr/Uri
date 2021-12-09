#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,c;
  char b[50000];
  scanf("%d",&a);
  while(a--){
    scanf("%s %d",b,&c);
    if(c==0){
      printf("%s\n",b);
    }
    else{
      for(int i=0;i<strlen(b);i++){
        if(b[i]-c<=90 && b[i]-c>=65){
          printf("%c",b[i]-c);
        }
        else{
          printf("%c",b[i]+26-c);
        }
      }
      printf("\n");
    }
  }

}