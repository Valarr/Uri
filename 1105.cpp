#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b, c, d, e, f, opa;
  while(scanf("%d%d",&a,&b) && a!=0 && b!=0){
    int mony[a];
    opa = 0;         
    for(c = 1; c <= a; c++){
      scanf("%d",&mony[c]);
    }        
    for(c = 1; c <= b; c++){
      scanf("%d%d%d", &d, &e, &f); 
      mony[d] -= f;
      mony[e] += f;
    }
    for(c = 1; c <= a; c++){
      if(mony[c] < 0){
	opa = 1;break;
      }
    }        
    if(opa == 1){ printf("N\n");}
    else{ printf("S\n");}
  }
}
