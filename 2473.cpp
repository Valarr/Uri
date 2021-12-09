#include <bits/stdc++.h>

using namespace std;

int main(){
  int a[6],b[6],tot=0;
  scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
  scanf("%d %d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4],&b[5]);
  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(b[i]==a[j]){
	tot++;
      }
    }
  }
  if(tot==3) cout << "terno\n";
  else if(tot==4) cout << "quadra\n";
  else if(tot==5) cout << "quina\n";
  else if(tot==6) cout << "sena\n";
  else cout << "azar\n";
}
