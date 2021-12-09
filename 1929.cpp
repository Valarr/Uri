#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[4],b;

    for (int j = 0; j < 4;j++){
        scanf("%d",&a[j]);
    }
    for (int i = 0; i < 4; i++){
        for (int j = i+1; j < 4; j++){
            if (a[i] > a[j]){
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }


    if(a[0]+a[1]>a[2] || a[1]+a[2]>a[3]){
        printf("S\n");
    }else{
        printf("N\n");
    }
}