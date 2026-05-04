#include <stdio.h>

int main() {
    int v[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++) {
        if(v[i] < 0) {
            v[i] = 0;
        }
    }

    printf("\nValores apos substituicao:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}