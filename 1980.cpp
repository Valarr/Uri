#include <bits/stdc++.h>

using namespace std;

int main(){

  string enter;

  while(cin >> enter){

    if(enter == "0") break;

    long long resp = 1;

    for(int i = 1 ; i<enter.size()+1 ; i++) resp *= i;

    cout<<resp<<endl;
    
  }

}
