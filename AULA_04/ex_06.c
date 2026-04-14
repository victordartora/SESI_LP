#include <stdio.h>

int main() {
    int v[10], i;
    int pares[10], impares[10];
    int p = 0, im = 0;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0)
            pares[p++] = v[i];
        else
            impares[im++] = v[i];
    }

    printf("Pares (%d): ", p);
    for(i = 0; i < p; i++) printf("%d ", pares[i]);

    printf("\nImpares (%d): ", im);
    for(i = 0; i < im; i++) printf("%d ", impares[i]);

    return 0;
}