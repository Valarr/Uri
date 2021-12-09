#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d, t, tt;
	while(true){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a == 0 && b == 0 && c == 0 && d == 0) break;
    if(a == 0) t = 24*60 + b;
    else t = a*60 + b;

    if(c == 0) tt = 24*60 + d;
    else tt = c*60 + d;

    if(tt > t) printf("%d\n", tt-t);
    else printf("%d\n", 24*60 - (t-tt));
	}
}