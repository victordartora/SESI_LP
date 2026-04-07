/*11) Peça um número e calcule o fatorial dele. */

#include <stdio.h>

int main() {
    int numero, i;
    int fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    printf("O fatorial de %d é: %d\n", numero, fatorial);

    return 0;
}