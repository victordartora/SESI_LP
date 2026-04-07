/*9)Peça um número e mostre todos os números de 1 até ele.*/

#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        printf("%d\n", i);
    }

    return 0;
}