#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, m, n, r;
  int p[100005];
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &m, &n);
    for(int i = 0; i < n; i++){
      scanf("%d", &p[i]);
    }
    sort(p, p+n);
    r = p[0];
    int i;
    for(i = 1; i < n; i++){
      if(p[i] >= m) break;
      r = max(r, p[i] - p[i-1]);
    }
    r = max(r, m - p[i-1]);
    printf("%d\n", r);
  }
}
