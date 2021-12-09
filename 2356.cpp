#include <bits/stdc++.h>

using namespace std;

int main(){
  string a,b;
  int c;
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  while(cin >> a >> b){
    for(int i=0;i<a.size();i++){
      c = 0;
      for(int j=0;j<b.size();j++){
    	if(a[i+j] != b[j]) break;
    	else c++;
      }
      if ((c == b.size())) break;
    }
    cout << ((c==b.size())? "Resistente\n" :  "Nao resistente\n"); 
  }
}
