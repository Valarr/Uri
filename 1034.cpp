#include <bits/stdc++.h>

using namespace std;

int n;
int p[101];

int dp(int n, int peso){

  int pd[peso + 1];
  memset(pd, 0, sizeof(pd));
  
  for(int i = 0; i <= peso; i++){
    for(int j = 0; j < n; j++){
      if (p[j] <= i)
	pd[i] = max(pd[i], pd[i - p[j]] + 1);
    }
    for(int j = 0; j < n; j++){
      if (p[j] <= i)
	pd[i] = min(pd[i], pd[i - p[j]] + 1);
    }
  }
  
  return pd[peso];
}

int main(){
  int peso, t;
  int k = 1;

  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &n, &peso);
    for(int i = 0; i < n; i++){
      scanf("%d", &p[i]);
    }
    printf("%d\n", dp(n, peso));
  }
}
