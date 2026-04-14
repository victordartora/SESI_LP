#include <stdio.h>

int main() {
    int v[10], i, j, count;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++) {
        count = 0;
        for(j = 0; j < 10; j++) {
            if(v[i] == v[j]) count++;
        }
        if(count > 5) {
            printf("Valor dominante: %d\n", v[i]);
            return 0;
        }
    }

    printf("Nao existe valor dominante\n");
    return 0;
}