#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,m=10,count=0;
    float a[12][12],sum=0;
    char o;
    scanf("%c",&o);
    for(i=0 ; i<12 ; i++){
        for(j=0 ; j<12 ; j++){
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0 ; i<11 ; i++){
        for(j=0 ; j<12 ; j++){
            if(j<=m)
            {
                sum+=a[i][j];
                count++;
            }
 
        }
        m--;
    }
    if(o=='S')
        printf("%.1f\n",sum);
    else
        printf("%.1f\n",sum/count);
}