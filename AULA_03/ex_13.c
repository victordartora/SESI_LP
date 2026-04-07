/*13) Some apenas os números ímpares entre 1 e 100. */

#include <stdio.h>

int main() {
    int i, soma = 0;

    for(i = 1; i <= 100; i++) {
        if(i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("A soma dos números ímpares é: %d\n", soma);

    return 0;
}