#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,b;
  while(scanf("%d:%d",&a,&b)!=EOF){
  printf(" ____________________________________________\n");
  printf("|                                            |\n");
  printf("|    ____________________________________    |_\n");
  printf("|   |                                    |   |_)\n");
  printf("|   |   8         4         2         1  |   |\n");
  printf("|   |                                    |   |\n");
  printf("|   |   %c         %c         %c         %c  |   |\n",((a & 8)? 'o' : ' '), ((a & 4)? 'o' : ' '), ((a & 2)? 'o' : ' '), ((a & 1)? 'o' : ' '));
  printf("|   |                                    |   |\n");
  printf("|   |                                    |   |\n");
  printf("|   |   %c     %c     %c     %c     %c     %c  |   |\n",((b & 32)? 'o' : ' '), ((b & 16)? 'o' : ' '), ((b & 8)? 'o' : ' '), ((b & 4)? 'o' : ' '), ((b & 2)? 'o' : ' '), ((b & 1)? 'o' : ' '));
  printf("|   |                                    |   |\n");
  printf("|   |   32    16    8     4     2     1  |   |_\n");
  printf("|   |____________________________________|   |_)\n");
  printf("|                                            |\n");
  printf("|____________________________________________|\n\n");
  }
}
