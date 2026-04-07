/*24) Peça um número e verifique se ele é primo.*/

#include <stdio.h>

int main() {
    int numero, i, contador = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            contador++;
        }
    }

    if(contador == 2) {
        printf("O número é primo.\n");
    } else {
        printf("O número não é primo.\n");
    }

    return 0;
}