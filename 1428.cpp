#include <bits/stdc++.h>
using namespace std;

int main(){
  int rep,p1,p2;
  scanf("%d",&rep);

  while (rep){
        scanf("%d %d", &p1, &p2);
        printf("%d\n",(p1/3)*(p2/3));
        rep--;
  }
    return 0;
}
