#include <bits/stdc++.h>

using namespace std;

unsigned long long int a[61];

unsigned long long int fibpd(int n){
  if(n<=1) return n;
  if(a[n]==0)
    a[n] = fibpd(n-1) + fibpd(n-2);
  return a[n];
}

int main(){
  int b, c;
  memset(a,0,sizeof(a));
  cin >> b;
  while(b--){
    cin >> c;
    cout << "Fib("<< c <<") = "<< fibpd(c) <<"\n";
  }
}
