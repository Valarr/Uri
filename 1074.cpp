#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x==0){
            cout << "NULL\n";
        }else if (x%2==0){
            cout << "EVEN ";
            if(x>0){
                cout << "POSITIVE\n";
            }else{
                cout << "NEGATIVE\n";
            }
        }else{
            cout << "ODD ";
            if(x>0){
                cout << "POSITIVE\n";
            }else{
                cout << "NEGATIVE\n";
            }
        }
        
    }
}