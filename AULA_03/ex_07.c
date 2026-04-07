/*7) Calcule a soma dos números de 1 até 10.*/

#include <stdio.h>

int main() {
    int i, soma = 0;

    for(i = 1; i <= 10; i++) {
        soma = soma + i;
    }

    printf("A soma é: %d\n", soma);

    return 0;
}