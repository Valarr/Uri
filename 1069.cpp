#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,j,esq,dir;
  char d[1001];
  cin >> a;
  for(int i=0;i<a;i++){
    scanf("%s", d);
    esq=0;dir=0;j=0;
    while(true){
      if(d[j]=='\0'){break;}
      if(d[j]=='<'){esq++;}
      if(d[j]=='>' && esq > 0){
	dir++;
	esq--;}
      j++;
    }
    cout << dir << "\n";
  }
}
