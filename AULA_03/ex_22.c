/*22) Solicite um número positivo. Caso o usuário digite um número inválido, peça novamente.*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    while(numero <= 0) {
        printf("Número inválido! Digite novamente: ");
        scanf("%d", &numero);
    }

    printf("Número válido digitado: %d\n", numero);

    return 0;
}