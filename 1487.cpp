#include <bits/stdc++.h>

using namespace std;

int n;
int v[101], p[101];

int dp(int n, int peso){

  int pd[peso + 1];
  memset(pd, 0, sizeof(pd));
  
  for(int i = 0; i <= peso; i++){
    for(int j = 0; j < n; j++){
      if (p[j] <= i)
	pd[i] = max(pd[i], pd[i - p[j]] + v[j]);
    }
  }
  
  return pd[peso];
}

int main(){
  int peso;
  int k = 1;
  while(scanf("%d %d", &n, &peso) && n != 0){
    for(int i = 0; i < n; i++){
      scanf("%d %d", &p[i], &v[i]);
    }
    printf("Instancia %d\n", k++);
    printf("%d\n\n", dp(n, peso));
  }
}
