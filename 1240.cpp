#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,b,tot=0;
  while(scanf("%d %d",&a,&b) && a!=0 && b!=0){
    tot=b-a;
    for(int i=0;i<2;i++){
      if(tot>=100) tot-=100;
      else if(tot>=50) tot-=50;
      else if(tot>=20) tot-=20;
      else if(tot>=10) tot-=10;
      else if(tot>=5) tot-=5;
      else if(tot>=2) tot-=2;
      else tot =-1;
    }
    if(tot==0) printf("possible\n");
    else printf("impossible\n");
  }
}