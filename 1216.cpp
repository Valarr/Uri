#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    string primeiroGodofredo;
  double numeroGodofredo, somaGodofredo=0;
  int i=0;

  while(getline(cin, primeiroGodofredo)){
    scanf("%lf", &numeroGodofredo);
    somaGodofredo+=numeroGodofredo;
    i++;
    getchar();
  }

  printf("%.1lf\n",somaGodofredo/i);
  system("pause");
    return 0;
}

