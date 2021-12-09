#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
  int nVezes;
  int lek, mina, cont;
  int i =0;

  while(scanf("%d", &nVezes)){
        lek = 0;
        mina = 0;
        if(nVezes==0){
            break;
        }
        for(i=0;i<nVezes;i++){
                scanf("%d", &cont);
            if(cont==0){
                    mina++;
            }
            else{
                lek++;
            }
        }
    printf("Mary won %d times and John won %d times\n", mina, lek);
  }

    return 0;
 }


