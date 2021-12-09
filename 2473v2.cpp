#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int i, j, aposta[6], resultado[6];
    int foi = 0;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &aposta[0], &aposta[1], &aposta[2], &aposta[3], &aposta[4], &aposta[5], &resultado[0], &resultado[1], &resultado[2], &resultado[3], &resultado[4], &resultado[5]);

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(aposta[j]==resultado[i]){
                foi++;
                break;
            }
        }
    }
    if (foi<3){
        printf("azar\n");
    }
    else if (foi==3){
        printf("terno\n");
    }
    else if (foi==4){
        printf("quadra\n");
    }
     else if (foi==5){
        printf("quina\n");
    }
     else{
        printf("sena\n");
    }
    return 0;
 }


