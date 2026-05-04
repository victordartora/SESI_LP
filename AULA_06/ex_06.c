#include <stdio.h>

int main() {
    int m[4][4], maior, menor;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &m[i][j]);

            if(i == 0 && j == 0){
                maior = menor = m[i][j];
            } else {
                if(m[i][j] > maior) maior = m[i][j];
                if(m[i][j] < menor) menor = m[i][j];
            }
        }
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}