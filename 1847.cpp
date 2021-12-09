#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if(b<a && c>=b) cout << ":)\n";
  else if(b>a && c<=b) cout << ":(\n";
  else if(b>a && c>b && abs(b-c)<abs(a-b)) cout << ":(\n";
  else if(b>a && c>b && abs(b-c)>=abs(a-b)) cout << ":)\n";
  else if(b<a && c<b && abs(b-c)<abs(a-b)) cout << ":)\n";
  else if(b<a && c<b && abs(b-c)>=abs(a-b)) cout << ":(\n";
  else if(a==b && c>b) cout << ":)\n";
  else if(a==b && c<=b) cout << ":(\n";
}