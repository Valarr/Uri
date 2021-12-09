#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b,c,tot;
  cin >> a >> b >> c;
  tot = a+b+c;
  if(tot>24){
    tot-=24;
  }
  else if (tot<0){
    tot+=24;
  }
  cout << tot << "\n";
}