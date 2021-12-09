#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,i;
  while(true){
    scanf("%d",&n);
    if(n==0){break;}
    deque<int> cards;
    for(i=1;i<=n;i++){
      cards.push_back(i);
    }
    printf("Discarded cards:");
    if(cards.size() <=1){printf("\n");}
    else{
      while(cards.size() > 1){
	if(cards.size() >2){
	  printf(" %d,", cards.front());
	}
	else{
	  printf(" %d\n",cards.front());
	}
	cards.pop_front();
	cards.push_back(cards.front());
	cards.pop_front();
      }
    }
    printf("Remaining card: %d\n",cards.front());
  }
}
