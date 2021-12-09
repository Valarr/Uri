#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(0);
  
  map<string, int> mp;
  set<string> dead;
  string s1, s2;

  while(cin >> s1 >> s2) {
    mp[s1]++;
    dead.insert(s2);
  }
  cout << "HALL OF MURDERERS\n";
  for(map<string,int>::iterator it = mp.begin(); it != mp.end(); it++){
    if(!dead.count(it->first)){
      cout << it->first << " " << it->second << "\n";
    }
  }
}
