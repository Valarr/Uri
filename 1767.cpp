#include <bits/stdc++.h>
using namespace std;

int n;
int pd[105][55];
int v[105], p[105];
int pego[105][55];

int dp(int pos, int peso){
  if (pos >= n || peso <= 0) return 0;
  if(pd[pos][peso] == -1){
    int a = dp(pos + 1, peso);
    int b = 0;
    if (peso >= p[pos]){
      b = dp(pos + 1, peso - p[pos]) + v[pos];
    }
    if (b > a){
      pd[pos][peso] = b;
      pego[pos][peso] = 1;
    } else {
      pd[pos][peso] = a;
      pego[pos][peso] = 0;
    }
  }
  return pd[pos][peso];
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    for (int i = 0; i < 105; i++) {
      for(int j = 0; j < 55; j++) {
	pd[i][j] = -1;
      }
    }
    for(int i = 0; i < n; i++){
      scanf("%d %d", &v[i], &p[i]);
    }
    printf("%d brinquedos\n", dp(0, 50));
    
    int i = 0;
    int peso = 0;
    int pesoTotal = 50;
    int r = 0;
    for(int i = 0; i < n; i++) {
      if(pego[i][pesoTotal]){
    	peso += p[i];
    	r++;
    	pesoTotal -= p[i];
      }
    }
    printf("Peso: %d kg\n", peso);
    printf("sobra(m) %d pacote(s)\n\n", (n - r));
  }
}