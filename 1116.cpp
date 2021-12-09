#include <bits/stdc++.h>

using namespace std;

int main(){
    double n, x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        if(y==0){
            cout << "divisao impossivel\n";
        }else{
            cout << fixed << setprecision(1) << x/y << "\n";
        }
        
    }

}