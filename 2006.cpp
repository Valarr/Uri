#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int  a, b , c=0 , d , e, f;
  cin >> a;
 for(int i =0;i<5;i++){
    cin >> b;
    if (b==a){
      c+=1;
    }
  }
  cout << c << "\n";
}