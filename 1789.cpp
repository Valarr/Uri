#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  while(scanf("%d",&a)!=EOF){
    c = 0;
    while(a--){
      cin >>b;
      if(b>c){
        c = b;
      }
    }
    if(c<10){
      cout << 1 << "\n";
    }
    else if(c>=10 && c < 20){
      cout << 2 << "\n";
    }
    else cout << 3 << "\n";
  }
}