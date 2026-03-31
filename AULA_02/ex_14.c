/*14) Classificação de Nota com Conceito
Leia uma nota de 0 a 10 e classifique:
A (>= 9)
B (7 – 8.9)
C (5 – 6.9)
D (< 5)*/

#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 9)
        printf("Conceito: A");
    else if (nota >= 7)
        printf("Conceito: B");
    else if (nota >= 5)
        printf("Conceito: C");
    else
        printf("Conceito: D");

    return 0;
}