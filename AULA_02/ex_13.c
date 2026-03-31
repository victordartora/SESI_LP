/*13) Operação Matemática
Leia dois números e uma operação (+, -, *, /).
Realize a operação e exiba o resultado.*/

#include <stdio.h>

int main() {
    float a, b;
    int operação;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    printf("1-Soma 2-Subtracao 3-Multiplicacao 4-Divisao\n");
    scanf("%i", &operação);

    if(operação == 1)
        printf("Resultado: %.2f", a + b);
    else if(operação == 2)
        printf("Resultado: %.2f", a - b);
    else if(operação == 3)
        printf("Resultado: %.2f", a * b);
    else if(operação == 4)
        printf("Resultado: %.2f", a / b);

    return 0;
}