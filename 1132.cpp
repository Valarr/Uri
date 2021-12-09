#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,p=0;
    cin >> x >> y;
    if(x<y){
        for(int i=x;i<=y;i++){
            if(i%13!=0) p+=i;
        }cout << p << "\n";
    }
    else{
        for(int i=y;i<=x;i++){
                if(i%13!=0) p+=i;
            }cout << p << "\n";
    }
}
