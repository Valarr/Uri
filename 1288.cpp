#include <bits/stdc++.h>
using namespace std;
int b;
int powa[51], w[51];
int mat[101][101];

int calc(int pos,int peso){
  int coco=0;
  if(pos==b) return 0;
  if(mat[pos][peso]==-1){
    if(w[pos]<=peso){
      coco = calc(pos+1,peso-w[pos])+powa[pos];
    }
    mat[pos][peso]= max(coco,calc(pos+1,peso));
  }
  return mat[pos][peso];
}

int main(){
  int a,q,r, resp;
  cin >> a;
  for(int i=0;i<a;i++){
    memset(mat,-1,sizeof(mat));
    cin >> b;
    for(int j=0;j<b;j++){
      scanf("%d %d",&powa[j],&w[j]);
    }
    scanf("%d %d",&q,&r);
    resp = calc(0,q);
    if(resp>=r) cout << "Missao completada com sucesso\n";
    else cout << "Falha na missao\n";    
  }
}
