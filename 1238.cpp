#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, aa, j=0, tamc, tamb;
  char b[52],c[52];
  scanf("%d",&a);
  while(a--){
    scanf("%s ", b);
    scanf("%s", c);
    tamb=(strlen(b));
    tamc=(strlen(c));
    aa = min(tamb,tamc);
    for(j = 0;j < aa; j++){
        printf("%c",b[j]);
        printf("%c",c[j]);
   }
   if(tamb>tamc){
     tamb -=j;
     while(tamb--){
       printf("%c", b[j]);
       j++;
     }
  }
   else if(tamc>tamb){
     tamc -=j;
     while(tamc--){
       printf("%c", c[j]);
       j++;
   }
  }
  printf("\n");
}
}