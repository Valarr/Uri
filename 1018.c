#include <stdio.h>
 
int main (void){
 
    int S;
    scanf ("%d", &S);
    printf ("%d\n",S);
 
    int Notas = ( S - (S%100))/100;
    printf ("%d nota(s) de R$ 100,00\n", Notas);
    S = S%100 ;
 
    Notas = ( S - (S%50))/50;
    printf ("%d nota(s) de R$ 50,00\n", Notas);
    S = S%50 ;
 
    Notas = ( S - (S%20))/20;
    printf ("%d nota(s) de R$ 20,00\n", Notas);
    S = S%20 ;
 
    Notas = ( S - (S%10))/10;
    printf ("%d nota(s) de R$ 10,00\n", Notas);
    S = S%10 ;
 
    Notas = ( S - (S%5))/5;
    printf ("%d nota(s) de R$ 5,00\n", Notas);
    S = S%5 ;
 
    Notas = ( S - (S%2))/2;
    printf ("%d nota(s) de R$ 2,00\n", Notas);
    S = S%2 ;
 
 
    printf ("%d nota(s) de R$ 1,00\n", S);
 
 
 	system("pause");
    return 0;
}