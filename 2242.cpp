#include <bits/stdc++.h>

using namespace std;

int main(){
  int i=0,k=0;
  char a[55];
  char b[55];
  scanf("%s",b);
  int tam = 0;
  for(int k=0;b[k]!='\0';k++){
    if(b[k]=='a' || b[k]=='e' || b[k]=='i' || b[k]=='o' || b[k]=='u'){
      a[i] = b[k];
      i++;
    }
  }
  a[i]='\0';
  tam = strlen(a)-1;
  for(int i=0;i<tam;i++){
    if(a[i]!=a[tam-i]){
      printf("N\n");
      return 0;
    }
  }
  printf("S\n");
}
