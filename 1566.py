#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main(){
    vector<int>vetor;
    int n;
    int tam, num;

    scanf("%d", &n);
    while(n--){
        vetor.clear();
        scanint(tam);
          for(int i=0;i<tam;i++){
                scanint(num);
                vetor.push_back(num);
           }
           sort(vetor.begin(),vetor.end());
           printf("%d", vetor[0]);
           for(int j=1;j<tam;j++){
                printf(" %d", vetor[j]);
           }
        printf("\n");
    }
}
