#include <bits/stdc++.h>
using namespace	std;
int main(){
  int n, m;
  map<string, string>mp;
  scanf("%d", &n);
  getchar();
  for (int i = 0; i < n; i++) {
    string idioma, feliz, natal;
    getline(cin,idioma);
    //cout << idioma << "\n";
    getline(cin, feliz);
    mp[idioma] = feliz;
  }

  scanf("%d", &m);
  getchar();
  
  for (int i = 0; i < m; i++) {
    string nome, idioma;
    getline(cin,nome);
    getline(cin, idioma);
    cout << nome << "\n" << mp[idioma] << endl  << endl;
  }
  return 0;
}
