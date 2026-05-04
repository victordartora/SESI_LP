#include <stdio.h>

int main() {
    int m[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        int soma = 0;
        for(int j = 0; j < 3; j++){
            soma += m[i][j];
        }
        printf("Linha %d: %d\n", i, soma);
    }

    return 0;
}