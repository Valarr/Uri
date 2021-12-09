#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  char coco[10001], lixo[10001];
  int tot=0;
  scanf("%s", coco);
  scanf("%s", lixo);
  int tamC = strlen(coco), tamL = strlen(lixo);
  for(int i=0;i<=tamC-tamL;i++){
    int foi = 1;
    for(int j=0;j<tamL;j++){
      if(lixo[j]==coco[i+j]){
        foi = 0;
        break;
      }
    }
      tot+=foi;
  }
  cout << tot << "\n";
}