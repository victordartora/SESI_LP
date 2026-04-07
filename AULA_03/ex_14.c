/*14) Peça um número e mostre a contagem regressiva até 0.*/

#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}