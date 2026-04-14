#include <stdio.h>

int main() {
    float temp[7], soma = 0, media;
    int i, acima = 0, quente = 0, frio = 0;

    for(i = 0; i < 7; i++) {
        scanf("%f", &temp[i]);
        soma += temp[i];

        if(temp[i] > temp[quente]) quente = i;
        if(temp[i] < temp[frio]) frio = i;
    }

    media = soma / 7;

    for(i = 0; i < 7; i++) {
        if(temp[i] > media) acima++;
    }

    printf("Media: %.2f\n", media);
    printf("Dia mais quente: %d\n", quente + 1);
    printf("Dia mais frio: %d\n", frio + 1);
    printf("Dias acima da media: %d\n", acima);

    return 0;
}