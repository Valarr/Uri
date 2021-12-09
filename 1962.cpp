#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,b;
  cin >> a;
  while(a--){
    cin >> b;
    if(b>=2015){
      cout << abs(2015-b)+1 << " A.C.\n";
    }
    else{
      cout << 2015-b << " D.C.\n";
    }
  }  
}