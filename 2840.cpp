#include <bits/stdc++.h>

using namespace std;

#define pi 3.1415

int main(){
  long long  r,l;
  long long a,raio;
  int resp=0;
  cin >> r >> l;
  raio = r*r*r;
  a = ((4)*(pi*raio)/3);
  while(a<l){
    l -= a;resp++;
  }
  printf("%d\n",resp);
}
