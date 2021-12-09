#include <bits/stdc++.h>
#define inf 0x3F3F3F3F

using namespace std;

int main(){
  int t, n;
  int bx, by, b1x, b1y;
  
  scanf("%d", &t);

  while(t--){
    scanf("%d", &n);
    scanf("%d %d", &bx, &by);
    int r = 1;
    int m = inf;
    for(int i = 0; i < n; i++){
      scanf("%d %d", &b1x, &b1y);
      int temp = (sqrt((b1x - bx)*(b1x - bx) + (b1y - by)*(b1y - by))) * 1000;
      if(temp < m){
    	m = temp;
    	r = i + 1;
      }
    }
    printf("%d\n", r);
  }
}
