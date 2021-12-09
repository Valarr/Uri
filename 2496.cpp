#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  char n[28];
  string  q ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  cin >> a;
  while(a--){
    cin >> b;
    scanf("%s",n);
    c=0;
    for(int i=0;i<b;i++){
      if(n[i]!=q[i]){
	c++;}
    }
  
    if(c>2){
      cout << "There aren't the chance.\n";
    }
    else{
      cout << "There are the chance.\n";
    }
  }
}
