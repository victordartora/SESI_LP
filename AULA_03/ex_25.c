/*25) Simule um caixa eletrônico: peça um valor e mostre quantas notas de 100, 50, 20, 10, 5 e 1 são necessárias.*/

#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    printf("Notas de 100: %d\n", valor / 100);
    valor = valor % 100;

    printf("Notas de 50: %d\n", valor / 50);
    valor = valor % 50;

    printf("Notas de 20: %d\n", valor / 20);
    valor = valor % 20;

    printf("Notas de 10: %d\n", valor / 10);
    valor = valor % 10;

    printf("Notas de 5: %d\n", valor / 5);
    valor = valor % 5;

    printf("Notas de 1: %d\n", valor);

    return 0;
}