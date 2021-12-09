#include<bits/stdc++.h>
using namespace std;

int main(){
  char str[100005];
  int tem=0;
  scanf("%s",str);
  int a = strlen(str);
  for(int i=0;i<a;i++){
      if((str[i]=='z'||str[i]=='Z') && (str[i+1]=='e' || str[i+1]=='E') && (str[i+2]=='l'|| str[i+2]=='L') && (str[i+3]=='d'||str[i+3]=='D') && (str[i+4]=='a'||str[i+4]=='A')){
      tem = 1;
      break;
    }
  } 
  if(tem==1) printf("Link Bolado\n");
  else printf("Link Tranquilo\n");
}