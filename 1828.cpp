#include <bits/stdc++.h>

using namespace std;

int main(){
  int a;
  string coco, merda;

  cin >> a;
  for(int i=1;i<=a;i++){
    cin >> coco >> merda;
    if(coco==merda){
      printf("Caso #%d: De novo!\n",i);
    }
    else if(coco=="tesoura"){
      if(merda=="papel" || merda=="lagarto"){printf("Caso #%d: Bazinga!\n",i);}
      else{printf("Caso #%d: Raj trapaceou!\n",i);}
    }
    else if(coco=="papel"){
      if(merda=="pedra" || merda=="Spock"){printf("Caso #%d: Bazinga!\n",i);}
      else{printf("Caso #%d: Raj trapaceou!\n",i);}
    }
    else if(coco=="pedra"){
      if(merda=="lagarto" || merda=="tesoura"){printf("Caso #%d: Bazinga!\n",i);}
      else{printf("Caso #%d: Raj trapaceou!\n",i);}
    }
    else if(coco=="lagarto"){
      if(merda=="Spock" || merda=="papel"){printf("Caso #%d: Bazinga!\n",i);}
      else{printf("Caso #%d: Raj trapaceou!\n",i);}
    }
    else if(coco=="Spock"){
      if(merda=="tesoura" || merda=="pedra"){printf("Caso #%d: Bazinga!\n",i);}
      else{printf("Caso #%d: Raj trapaceou!\n",i);}
    }
  }
}
