#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
  int tot=0;
  const char* b = "caw caw\n";
  char a[10];
  while(fgets(a,10,stdin)){
    
    if(a[0]==42){
      tot+=4;
    }
    if(a[1]==42){
      tot+=2;
    }
    if(a[2]==42){
      tot+=1;
    }

      int c = strcmp(a, b);
      if(c==0){
      cout << tot << "\n";
      tot = 0;
    }
  }

  

}