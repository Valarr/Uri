#include<bits/stdc++.h>
using namespace std;

int main(){
  double a,b,c,d;
  cin >> a>> b >> c>> d;
  printf("%.04lf\n", pow(pow(a-c,2)+pow(b-d,2),0.5));
}
