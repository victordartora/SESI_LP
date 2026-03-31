/*20) Sistema de Multa de Trânsito
Leia a velocidade de um carro:
Até 60 km/h → sem multa
61–80 → multa leve
81–100 → multa grave
Acima de 100 → multa gravíssim
*/

#include <stdio.h>

int main() {
    int velocidade;

    printf("Digite a velocidade: ");
    scanf("%d", &velocidade);

    if (velocidade <= 60)
        printf("Sem multa");
    else if (velocidade <= 80)
        printf("Multa leve");
    else if (velocidade <= 100)
        printf("Multa grave");
    else
        printf("Multa gravissima");

    return 0;
}