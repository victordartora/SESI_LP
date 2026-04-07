/*17) Peça números até que o usuário digite um número negativo. Exiba quantos números foram digitados.*/

#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    printf("Digite um número (negativo para parar): ");
    scanf("%d", &numero);

    while(numero >= 0) {
        contador++;

        printf("Digite um número (negativo para parar): ");
        scanf("%d", &numero);
    }

    printf("Quantidade de números digitados: %d\n", contador);

    return 0;
}