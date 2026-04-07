/*26) Peça um número e desenhe um quadrado com * (ex: número 4 → 4 linhas com 4 asteriscos).*/


#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite um número: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}