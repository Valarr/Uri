#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
  int x, y;
  char superMatrizDaIrmaDoGodofredo[111][111];
  char ultimaSetaDoGodofredo;
  bool bauDoDjGodFerrari = false;
  scanf("%d %d",&x, &y);
  getchar();
  for(int i = 0; i < y; i++){
        for(int j = 0;j < x; j++){
            scanf("%c", &superMatrizDaIrmaDoGodofredo[i][j]);
        }
        getchar();
  }
  int i=0, j=0;
  while(i < y && j < x && i>=0 && j>=0 && superMatrizDaIrmaDoGodofredo[i][j] != '0'){
      if(superMatrizDaIrmaDoGodofredo[i][j]=='>'){
            ultimaSetaDoGodofredo = '>';
            superMatrizDaIrmaDoGodofredo[i][j]='0';
            j++;
        }
        else if(superMatrizDaIrmaDoGodofredo[i][j]=='<'){
            ultimaSetaDoGodofredo = '<';
            superMatrizDaIrmaDoGodofredo[i][j]='0';
            j--;
        }
        else if(superMatrizDaIrmaDoGodofredo[i][j]=='v'){
            ultimaSetaDoGodofredo = 'v';
            superMatrizDaIrmaDoGodofredo[i][j]='0';
            i++;
        }
        else if(superMatrizDaIrmaDoGodofredo[i][j]=='^'){
            ultimaSetaDoGodofredo = '^';
            superMatrizDaIrmaDoGodofredo[i][j]='0';
            i--;
        }
        else if(superMatrizDaIrmaDoGodofredo[i][j]=='.'){
            if(ultimaSetaDoGodofredo=='>'){
                j++;
            }
            else if(ultimaSetaDoGodofredo=='<'){
                j--;
            }
            else if(ultimaSetaDoGodofredo=='v'){
                i++;
            }
            else if(ultimaSetaDoGodofredo=='^'){
                i--;
            }
        }
        else if(superMatrizDaIrmaDoGodofredo[i][j] == '*'){
            bauDoDjGodFerrari = true;
            break;
        }

    }
    if(bauDoDjGodFerrari){
        printf("*\n");
    }
    else{
        printf("!\n");
    }
    return 0;
 }
