#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    double valor;
      scanf("%lf", &valor);

               double nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, moeda1 = 0;
               double moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda5 = 0, moeda01 = 0;


               while (valor >= 100)
               {
                   valor -= 100;
                   nota100++;
               }
               while (valor >= 50)
               {
                   valor -= 50;
                   nota50++;
               }
               while (valor >= 20)
               {
                   valor -= 20;
                   nota20++;
               }
               while (valor >= 10)
               {
                   valor -= 10;
                   nota10++;
               }
               while (valor >= 5)
               {
                   valor -= 5;
                   nota5++;
               }
               while (valor >= 2)
               {
                   valor -= 2;
                   nota2++;
               }
               while (valor >= 1)
               {
                   valor -= 1;
                   moeda1++;
               }
               while (valor >= 0.5)
               {
                   valor -= 0.5;
                   moeda50++;
               }
               while (valor >= 0.25)
               {
                   valor -= 0.25;
                   moeda25++;
               }
               while (valor >= 0.1)
               {
                   valor -= 0.1;
                   moeda10++;
               }
               while (valor >= 0.05)
               {
                   valor -= 0.05;
                   moeda5++;
               }
               while (valor >= 0.001)
               {
                   valor -= 0.01;
                   moeda01++;
               }

               printf("NOTAS:\n%0.0lf nota(s) de R$ 100.00\n%.0lf nota(s) de R$ 50.00\n%.0lf nota(s) de R$ 20.00\n%.0lf nota(s) de R$ 10.00\n%.0lf nota(s) de R$ 5.00\n%.0lf nota(s) de R$ 2.00\nMOEDAS:\n%.0lf moeda(s) de R$ 1.00\n%.0lf moeda(s) de R$ 0.50\n%.0lf moeda(s) de R$ 0.25\n%.0lf moeda(s) de R$ 0.10\n%.0lf moeda(s) de R$ 0.05\n%.0lf moeda(s) de R$ 0.01\n", nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda50, moeda25, moeda10, moeda5, moeda01);


    }