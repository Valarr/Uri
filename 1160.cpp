#include <bits/stdc++.h>
using namespace std;

int main(){
    int numeroDeVezes, i, pa, pb;
    double g1, g2;
    scanf("%d",&numeroDeVezes);

    while (numeroDeVezes){
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
        i=0;
        g1/=100;
        g2/=100;
         while(pa<=pb){
            i++;
            if(i>100){
                break;
            }
            pa+=pa*g1;
            pb+=pb*g2;
        }
         if(i>100){
            printf("Mais de 1 seculo.\n");
         }
         else{
         printf("%d anos.\n",i);
         }
         numeroDeVezes--;
    }
    return 0;
}
