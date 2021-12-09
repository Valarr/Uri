#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int i,r,g,b,p,x,c;

  scanf("%d",&c);

  for(x=0; x<c; x++) {

    scanf("%d",&p);

    r = 0;
    g = 0;
    b = 0;
    for(i=0; i<p; i++) {
      char o, u, lixo;

      cin.ignore();
      scanf("%c%c%c", &u, &lixo, &o);
      // printf("i: %d | p: %d | u: %c | o: %c\n", i, p, u, o);

      switch(u) {
      case 'R':
        if (o=='G') {
          r = r + 2;
        } else r++;
        break;
      case 'G':
        if (o=='B') {
          g = g + 2;
        } else g++;
        break;
      case 'B':
        if (o=='R') {
          b = b + 2;
        } else b++;
        break;
      }

    }

    if(r==b && r==g) { //Verifica se as três variáveis são iguais
      printf("trempate\n");
    } else {
      if(r==g && r>b) { //verifica se duas são iguais e maiores que a outra
        printf("empate\n");
      } else {
        if(b==g && b>r) { //verifica se duas são iguais e maiores que a outra
          printf("empate\n");
        } else {
          if(r>g && r>b) { //verifica se red é maior que todas
            printf("red\n");
          } else {
            if(g>b && g>r) { //verifica se green é maior que todas
              printf("green\n");
            } else printf("blue\n"); //se nenhum dos casos anteriores é verdadeiro então blue é maior que todas
          }
        }
      }

    }

  }

  return 0;
}