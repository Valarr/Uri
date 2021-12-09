#include <bits/stdc++.h>

using namespace std;
map<string,int> axaxin;
string dead[100010];
int main(){
  string a,b;
  int c=0;
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  while(cin >> a >>b){
    axaxin[a]++;
    dead[c++]=b;
  }
  for(int j=0;j<c;j++){
    axaxin.erase(dead[j]);
  }
  cout << "HALL OF MURDERERS\n";
  for(map<string, int>::iterator it = axaxin.begin(); it != axaxin.end(); it++){
    cout << it->first << " " << it->second << "\n";
  }
}
