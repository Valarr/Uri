#include <bits/stdc++.h>
using namespace std;

int main(){
    char comp;
    char line[1200];
    char * pch;
    int i;

    while(gets(line)){
          if(line[0] == '*') break;
           i = 0;
           comp = 32;
           pch = strtok (line," ");

           while (pch != NULL){
           if(comp == 32) comp = pch[0];

           else{
                if(pch[0] >= 65 && pch[0] <= 90){
                        if(comp == pch[0] || comp == pch[0] + 32){
                                i = 0;
                        }
                        else i = 1;
                }else{
                      if(comp == pch[0] || comp == pch[0] - 32){
                               i = 0;
                      }
                      else i = 1;
                }
           }

           if(i == 1) break;
           pch = strtok (NULL, " ");
           }
           if(i == 1) printf("N\n");

           else printf("Y\n");

    }
    return 0;
}
