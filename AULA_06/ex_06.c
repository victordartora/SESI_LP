#include <stdio.h>

int main() {
    int v[6];
    int i, menor;

    for(i = 0; i < 6; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    menor = v[0];

    for(i = 1; i < 6; i++) {
        if(v[i] < menor) {
            menor = v[i];
        }
    }

    printf("\nMenor valor: %d\n", menor);

    return 0;
}