#include <stdio.h>

int main() {
    int m[5][5], soma = 0;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &m[i][j]);

            if(i + j == 4){
                soma += m[i][j];
            }
        }
    }

    printf("Soma diagonal secundaria: %d\n", soma);

    return 0;
}