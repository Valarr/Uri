#include <bits/stdc++.h>

using namespace std;

int main(){
  int a;
  scanf("%d",&a);
  int b,c;
  string k, par, l, impar;
  while(a--){
    cin >> k >> par >> l >> impar;
    scanf("%d %d", &b,&c);
    if((b+c)%2==0){
      if(par=="PAR"){ cout << k << "\n";}
      else{ cout << l << "\n";}
    }
    else{
      if(par=="IMPAR"){ cout << k << "\n";}
      else{ cout << l << "\n";}
    }
  }
}
