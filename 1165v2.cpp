#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  bool n=false;
  cin >> a;
  while(a--){
    cin >> b;
    n=false;
    for(int i=2; i<b;i++){
      if(b%i==0){
	n=true;
      }
    }
    if(n==true){
      cout << b << " nao eh primo\n";
    }
      else if(n==false){
	cout << b << " eh primo\n";
      }
  }
}
