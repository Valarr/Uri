#include<bits/stdc++.h>

using namespace std;

int main(){
    char coco[1001];
    int i,j;
    fgets(coco,1001,stdin);
    for(i=0; coco[i] >= 32; i++);
	  coco[i] = '\0';
    for( i=0, j=1; coco[i] != '\0'; i++)
		if(coco[i] == 'p' && j)
			j=0;
		else{
			printf("%c", coco[i]);
			j=1;
		}
    printf("\n");
}