/*19) Peça números até o usuário digitar 999. Mostre o maior número digitado.*/

#include <stdio.h>

int main() {
    int numero, maior = 0;

    printf("Digite um número (999 para parar): ");
    scanf("%d", &numero);

    while(numero != 999) {
        if(numero > maior) {
            maior = numero;
        }

        printf("Digite um número (999 para parar): ");
        scanf("%d", &numero);
    }

    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}