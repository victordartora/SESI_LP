/*16) Faça um programa que peça números ao usuário até que ele digite 0. No final, mostre a soma de todos os números digitados.*/

#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite um número (0 para parar): ");
    scanf("%d", &numero);

    while(numero != 0) {
        soma = soma + numero;

        printf("Digite um número (0 para parar): ");
        scanf("%d", &numero);
    }

    printf("A soma dos números digitados é: %d\n", soma);

    return 0;
}