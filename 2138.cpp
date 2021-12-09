#include <bits/stdc++.h>

using namespace std;

int main(){
  string lixo;
  while(cin>>lixo){
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    int tam = lixo.length();
    for(int i=0;i<tam;i++){
      if(lixo[i]=='0'){a[0]++;}
      else if(lixo[i]=='1'){a[1]++;}
      else if(lixo[i]=='2'){a[2]++;}
      else if(lixo[i]=='3'){a[3]++;}
      else if(lixo[i]=='4'){a[4]++;}
      else if(lixo[i]=='5'){a[5]++;}
      else if(lixo[i]=='6'){a[6]++;}
      else if(lixo[i]=='7'){a[7]++;}
      else if(lixo[i]=='8'){a[8]++;}
      else if(lixo[i]=='9'){a[9]++;}
    }
    int mayo=a[0],indiex=0;
    for(int j=0;j<10;j++){
      if(a[j]>=mayo){
	mayo=a[j];
	indiex=j;
      }
    }
    printf("%d\n",indiex);
  }
}
