#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, z, aux;
    cin >> x >> y >> z;
    int vet[] = {x,y,z};
    if(x<y){
        aux = x;
        x = y;
        y = aux;
    }
    if(y<z){
        aux = y;
        y = z;
        z = aux;
    }
    if(x<y){
        aux = x;
        x = y;
        y = aux;
    }
    cout << z << "\n" << y << "\n" << x << "\n\n" << vet[0] << "\n" << vet[1] << "\n" << vet[2] << "\n" ;
}
