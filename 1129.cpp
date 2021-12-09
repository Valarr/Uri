#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,black,white;
  char esse;
  int a,b,c,d,e;
  while(scanf("%d",&n) && n!=0){
    while(n--){
      black = 0;white = 0;
      scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
      if(a<=127){black++;esse='A';}else{white++;}
      if(b<=127){black++;esse='B';}else{white++;}
      if(c<=127){black++;esse='C';}else{white++;}
      if(d<=127){black++;esse='D';}else{white++;}
      if(e<=127){black++;esse='E';}else{white++;}
      if(black==1){
	printf("%c\n",esse);
      }else{printf("*\n");}
    }
  }
}
