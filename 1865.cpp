#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, n;
  string nome;
  cin >> a;
  for(int i = 0; i<a;i++){
    cin >> nome >> n;
    if(nome == "Thor"){
      cout << "Y\n";
    }
    else{
      cout << "N\n";
    }
  }
}