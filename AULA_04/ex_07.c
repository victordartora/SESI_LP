#include <stdio.h>

int main() {
    float saque[10], total = 0, maior = 0;
    int i, acima500 = 0;

    for(i = 0; i < 10; i++) {
        scanf("%f", &saque[i]);
        total += saque[i];

        if(saque[i] > maior) maior = saque[i];
        if(saque[i] > 500) acima500++;
    }

    printf("Total sacado: %.2f\n", total);
    printf("Maior saque: %.2f\n", maior);
    printf("Saques acima de 500: %d\n", acima500);

    return 0;
}