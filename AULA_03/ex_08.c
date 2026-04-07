/*8) Solicite um número ao usuário e exiba a tabuada dele (de 1 a 10).*/

#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}