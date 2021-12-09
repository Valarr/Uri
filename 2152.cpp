#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, a,b,c;
    cin >> x;
    while(x--){
        cin >> a >> b >> c;
        if(a<10){
            cout << "0" << a;
        }else{
            cout << a;
        }if(b<10){
            cout << ":0" << b;
        }else{
            cout << ":" << b;
        }
       
        if(c==1){
            cout << " - A porta abriu!\n";
        }
        else{
            cout << " - A porta fechou!\n";
        }
    }
    
    
}