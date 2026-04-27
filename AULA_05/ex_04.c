#include <stdio.h>

int main() {
    int v[6];
    int i, maior;

    for(i = 0; i < 6; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior = v[0];

    for(i = 1; i < 6; i++) {
        if(v[i] > maior) {
            maior = v[i];
        }
    }

    printf("\nMaior valor: %d\n", maior);

    return 0;
}