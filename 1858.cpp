#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int  a, b , i = 1, c ,d =30;
  cin >> a;
 while (i<=a){
   cin >> b;
   if(b<d){
     d =b;
     c=i;
   }
   i++;
 }
 cout << c << "\n";
}