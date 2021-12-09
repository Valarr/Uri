#include <bits/stdc++.h>
using namespace std;
int variavelDoWatanabe;
double f(int n){
if (n==variavelDoWatanabe)
    return 0;
return 1.0/(2+f(n+1));
}

int main(){
   cin >> variavelDoWatanabe;
   printf("%.10lf\n",1+f(0));
       return 0;
}
