#include <stdio.h>

int main() {
    int a[2][2], b[2][2], soma[2][2];

    for (int i = 0; i < 2; i++) {
        for (int n = 0; n < 2; n++) {
            printf("A[%d][%d]: ", i, n);
            scanf("%d", &a[i][n]);

            printf("B[%d][%d]: ", i, n);
            scanf("%d", &b[i][n]);

            soma[i][n] = a[i][n] + b[i][n];
        }
    }

    printf("\nSoma:\n");
    for (int i = 0; i < 2; i++) {
        for (int n = 0; n < 2; n++) {
            printf("%d ", soma[i][n]);
        }
        printf("\n");
    }

    return 0;
}