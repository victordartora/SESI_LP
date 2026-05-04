#include <stdio.h>

int main() {
    int m[3][3];

    // leitura da matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }

    // exibir diagonal principal
    for(int i = 0; i < 3; i++){
        printf("%d ", m[i][i]);
    }

    return 0;
}