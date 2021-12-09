#include <bits/stdc++.h>
using namespace std;

int main(){
   double i = 0;
   double j= 1;
   while (i<=2.0){
        if(i<=0.1||(i<=1.1&&i>=0.9)||i>=1.9){
            printf("I=%.0lf J=%.0lf\nI=%.0lf J=%.0lf\nI=%.0lf J=%.0lf\n", i, j, i, j+1, i, j+2);
        }
        else{
        printf("I=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\n", i, j, i, j+1, i, j+2);
        }
        i+=.2;
        j+=.2;
      }
       return 0;
}