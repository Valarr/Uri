#include <bits/stdc++.h>

using namespace std;

int main() {
  int i,r,g,b,p,x,c;

  scanf("%d",&c);

  for(x=0; x<c; x++) {

    scanf("%d",&p);

    r = 0;
    g = 0;
    b = 0;
    for(i=0; i<p; i++) {
      char o, u;

      cin.ignore();
      scanf("%c %c", &u, &o);

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

    if(r==b && r==g) { 
      printf("trempate\n");
    } else {
      if(r==g && r>b) { 
        printf("empate\n");
      } else {
        if(b==g && b>r) { 
          printf("empate\n");
        } else {
          if(r>g && r>b) { 
            printf("red\n");
          } else {
            if(g>b && g>r) { 
              printf("green\n");
            } else printf("blue\n"); 
          }
        }
      }

    }

  }
}
