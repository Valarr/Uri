#include <stdio.h>
 
int main() { 
    int A/*numero*/;
    double B/*horas trabalhadas*/, C/*Valor por hora*/, S/*salario*/;
    scanf("%d", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    S = C*B;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", A, S);
    return 0;
}
