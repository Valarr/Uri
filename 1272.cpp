#include <bits/stdc++.h>
using namespace std;

int main(){
  char coco[1000], msg[1000];
  int a,k,tam,i;
  cin >> a;
  getchar();
  while(a--){    
    fgets(coco,1000,stdin);
    k=0;
    tam = strlen(coco) - 1;
    coco[tam] = '\0';
    for(int i=0;i<tam;i++){
      if(i==0 && coco[0]!=' '){
	msg[k] = coco[0];
	k++;
      }
      if(coco[i]==' ' && coco[i+1]!=' '){
	msg[k] = coco[i+1];
	k++;
      }
    }
    msg[k]='\0';
    printf("%s\n",msg);
 }
}
