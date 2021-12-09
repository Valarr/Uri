#include <bits/stdc++.h>
using namespace std;
//25,32
int main(){
  char a[52];
  while(fgets(a,52,stdin)){
    int j=0;
    for(int i=0;i<strlen(a);i++){
      if(a[i]!=' '){
	if(j==0 || j%2==0){
	  if(a[i]>96 && a[i]<123){
	    a[i]=a[i]-32;
	  }
	}
	else{
	  if(a[i]>64 && a[i]<91){
	    a[i]=a[i]+32;
	  }
	}
	j++;
      }
      if(i==strlen(a)-1){
	a[i]='\0';
      }
    }
    cout << a << "\n";
  }
}
