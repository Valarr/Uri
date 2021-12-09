#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a;
  while(scanf("%d",&a)!=EOF){ 
  string b;
  
  for (int j = 0;j<a;j++){
    b+= '3';
  }
  string c=b;
  for(int i =0;i<a;i++){
    c[0+i]='1';
    c[a-i-1]='2';
    cout << c<<"\n";
    c=b;
  }
 }
}