#include <bits/stdc++.h>

using namespace std;

int n;
int peso[105], v[105];
int pd[105][1005];

int dp(int i, int p) {
  if(i >= n || p <= 0) {
    return 0;
  }
  if(pd[i][p] == -1) {
    int a = dp(i + 1, p);
    int b = 0;
    if(peso[i] <= p) {
      b = dp(i + 1, p - peso[i]) + v[i];
    }
    pd[i][p] = max(a, b);
  }
  return pd[i][p];
}

int main(){
  int p;
  while(scanf("%d", &n) && n) {
    for(int i = 0; i < 105; i++){
      for(int j = 0; j < 1005; j++) {
	    pd[i][j] = -1;
      }
    }
    for(int i = 0; i < n; i++) {
      scanf("%d %d", &v[i], &peso[i]);
    }
    scanf("%d", &p);
    printf("%d\n", dp(0, p));
  }
  
}
