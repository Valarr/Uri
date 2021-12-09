#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double a, p=0, s=0, t=0;
  int c, l;
  char b;
  cin >> b;
  for(int i =0;i<144;i++){
    cin >> p;
    c=i/12;
    l=i%12;
    if(c>l){
      s+=p;
      t++;
    }
  }
  if(b=='M'){
    cout << fixed << setprecision(1) << s/t <<"\n";
  }
  else{
    cout << fixed << setprecision(1) << s << "\n";
  }
}