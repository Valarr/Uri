#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k = 0, t1, t2, b = 1;

  scanf("%d", &n);
  scanf("%d %d", &t1, &t2);

  if(t2 > t1){
    k = 1;
  } else if(t2 == t1){
    b = 0;
  }
  
  if(b){
    for(int i = 2; i < n; i++){
      scanf("%d", &t1);
      if(k){
	if(i%2){
	  if(t1 <= t2){
	    b = 0;
	    break;
	  }
	} else {
	  if(t1 >= t2){
	    b = 0;
	    break;
	  }
	}
      } else {
	if(i%2){
	  if(t1 >= t2){
	    b = 0;
	    break;
	  }
	} else {
	  if(t1 <= t2){
	    b = 0;
	    break;
	  }
	}
      }
      t2 = t1;
    }
  }
  printf("%d\n", b);
}
