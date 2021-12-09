#include <bits/stdc++.h>

using namespace std;

int main(){
  char str1[10001], str2[10001];

  scanf("%s %s", str1, str2);

  int len1 = strlen(str1), len2 = strlen(str2);

  int r = 0;

  for(int i = 0; i <= len1 - len2; i++){
    int b = 1;
    for(int j = 0; j < len2; j++){
      if(str1[i+j] == str2[j]){
    b = 0;
    break;
      }
    }
    r+=b;
  }
  printf("%d\n", r);
}