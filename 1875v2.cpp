#include <bits/stdc++.h>
using namespace std;

int main() {
 int n=0,c=0;
 char aux,aux2;
 cin >> n;
 for(int i = 0;i<n;i++){
   cin >> c;
   int r=0,g=0,b=0;
   for(int j = 0;j<c;j++){
     cin >> aux >> aux2;
     
     switch(aux){
        case 'R':
        if(aux2=='G'){
          r+=2;
        }else{
          r++;
        }break;
        case 'G':
        if(aux2=='B'){
          g+=2;
        }else{
          g++;
        }break;
        case 'B':
        if(aux2=='R'){
          b+=2;
        }else{
          b++;
        }break;
     }
   }
   if(r==g && r==b){
     cout <<"trempate\n";     
   }else if(r>g && r>b){
     cout << "red\n";
   }else if(g>r && g>b){
     cout << "green\n";
   }else if(b>r && b>g){
     cout << "blue\n";
   }else{
     cout << "empate\n";
   }
 }
}