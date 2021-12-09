#include <bits/stdc++.h>

using namespace std;

int main(){
  char a[51];
  while(fgets(a,51,stdin)){
    for(int i=0;a[i]!='\0';i++){
      if((a[i]>=65 && a[i]<=77) || (a[i]>=97 && a[i]<=109)){
	printf("%c",a[i]+13);
      }
      else if((a[i]>77 && a[i]<=90) || (a[i]>109 && a[i]<=122)){
	printf("%c",a[i]-13);
      }
      else printf("%c",a[i]);
    }
  }
}
