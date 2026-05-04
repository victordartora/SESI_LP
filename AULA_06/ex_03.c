#include <stdio.h>

int main() {
    int v[8];
    int i, soma = 0;

    for(i = 0; i < 8; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
        soma += v[i];
    }

    printf("\nSoma dos elementos: %d\n", soma);

    return 0;
}