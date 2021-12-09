#include <bits/stdc++.h>
#include <iostream>
using namespace	std;
int main(){
  map<string, string>mp;
  mp["brasil"] = "Feliz Natal!";
  mp["alemanha"] = "Frohliche Weihnachten!";
  mp["austria"] = "Frohe Weihnacht!";
  mp["coreia"] = "Chuk Sung Tan!";
  mp["espanha"] = "Feliz Navidad!";
  mp["grecia"] = "Kala Christougena!";
  mp["estados-unidos"] = "Merry Christmas!";
  mp["inglaterra"] = "Merry Christmas!";
  mp["australia"] = "Merry Christmas!";
  mp["portugal"] = "Feliz Natal!";
  mp["suecia"] = "God Jul!";
  mp["turquia"] = "Mutlu Noeller";
  mp["argentina"] = "Feliz Navidad!";
  mp["chile"] = "Feliz Navidad!";
  mp["mexico"] = "Feliz Navidad!";
  mp["antardida"] = "Merry Christmas!";
  mp["canada"] = "Merry Christmas!";
  mp["irlanda"] = "Nollaig Shona Dhuit!";
  mp["belgica"] = "Zalig Kerstfeest!";
  mp["italia"] = "Buon Natale!";
  mp["libia"] = "Buon Natale!";
  mp["siria"] = "Milad Mubarak!";
  mp["marrocos"] = "Milad Mubarak!";
  mp["japao"] = "Merii Kurisumasu!";
  char idioma[1000];
  while(scanf("%s", idioma)!=EOF){
    if(mp.count(idioma)>0){
      cout << mp[idioma] << "\n" ;
    }
    else if(mp.count(idioma)<=0){
      cout <<"--- NOT FOUND ---\n";
    }
  }
}
