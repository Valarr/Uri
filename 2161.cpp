#include <bits/stdc++.h>
using namespace std;

int variavelDoWatanabe;

double f(int n){
if (n==variavelDoWatanabe){
    return 0;
}
    
return 1.0/(6+f(n+1));
}

int main(){
   cin >> variavelDoWatanabe;
   printf("%.10lf\n",3+f(0));
       return 0;
}
