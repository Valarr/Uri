#include<bits/stdc++.h>
using namespace std;

int primo(int p){
  if(p==2){
    return 2;
  }
  else{
    int aux=0;
    for(int i=p;i>0;i--){
      for(int j=2;j<i;j++){
        if(i%j==0){
          aux=0;
             break;
        }else
          aux=1;
        }
      if(aux==1)
        return i;
      }
  }
}
int main(){
    int a,b;
    cin >>a>>b;
    int p1=primo(a);
    int p2=primo(b);
    cout << p1*p2<<"\n";
}