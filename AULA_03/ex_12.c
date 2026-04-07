/*12) Conte quantos números pares existem entre 1 e 50.*/

#include <stdio.h>

int main() {
    int i, contador = 0;

    for(i = 1; i <= 50; i++) {
        if(i % 2 == 0) {
            contador++;
        }
    }

    printf("Quantidade de números pares: %d\n", contador);

    return 0;
}