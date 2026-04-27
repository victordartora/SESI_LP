#include <stdio.h>

int main() {
    int v[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nValores digitados:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}