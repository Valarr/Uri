#include <stdio.h>
 
int main() { 
    int A, B, C, D, R;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    
    R = (A * B) - (C * D);
    printf("DIFERENCA = %d\n", R);
    return 0;
}