#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c, i=0;
  while(cin >> a && a!=0){
    cin >> b >> c;
    i++;
    a+=a;
    if(b*b+c*c <= a*a) printf("Pizza %d fits on the table.\n",i);
    else printf("Pizza %d does not fit on the table.\n",i);
  }
}
