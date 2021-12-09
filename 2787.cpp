#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b;
  cin >> a >> b;
  if(a%2==0 && b%2==0){
    cout << 1 << "\n";
  }
  else if (a%2!=0 && b%2!=0){
    cout << 1 << "\n";
  }
  else{
    cout << 0 << "\n";
  }
}