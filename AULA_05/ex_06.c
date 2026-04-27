#include <stdio.h>

int main() {
    int v[10];
    int i, positivos = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++) {
        if(v[i] > 0) {
            positivos++;
        }
    }

    printf("\nQuantidade de numeros positivos: %d\n", positivos);

    return 0;
}