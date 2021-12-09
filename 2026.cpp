#include <bits/stdc++.h>

using namespace std;

int wt[1005],val[1005];

int knap(int n, int W) 
{ 
  int i, w;
  int K[1005][305];
  for (i = 0; i <= n; i++){ 
    for (w = 0; w <= W; w++){ 
      if (i==0 || w==0)      K[i][w] = 0; 
      else if (wt[i-1] <= w) K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
      else                   K[i][w] = K[i-1][w]; 
    } 
  } 
  
  return K[n][W]; 
} 

int main(){
  int a; // 1
  int b; // 2
  int p; // 3
  int coco; // salva val knap
  cin >> a;
  for(int k=1;k<=a;k++){
    cin >> b >> p;
    memset(wt,-1,sizeof(wt));
    memset(val,-1,sizeof(val));
    for(int y=0; y<b;y++){
      cin >> val[y] >> wt[y];
    }
    coco = knap(b,p);
    cout << "Galho " << k << ":\nNumero total de enfeites: " << coco << "\n\n";
  }
}
