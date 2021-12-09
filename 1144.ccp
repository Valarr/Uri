#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,a,b;
    cin >> x;
    for(int i = 1; i<=x;i++){
        a = pow(i,2);
        b = pow(i,3);
        printf("%d %d %d\n", i, a, b);
        printf("%d %d %d\n", i, a+1, b+1);
    }

}