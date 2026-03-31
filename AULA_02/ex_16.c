/*16) Cálculo de Conta de Energia
Leia o consumo em kWh:
Até 100 → R$0,50/kWh
101 a 200 → R$0,75/kWh
Acima de 200 → R$1,00/kWh
Calcule o valor total.*/

#include <stdio.h>

int main() {
    float consumo, total;

    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo);

    if (consumo <= 100)
        total = consumo * 0.50;
    else if (consumo <= 200)
        total = consumo * 0.75;
    else
        total = consumo * 1.00;

    printf("Valor da conta: R$ %.2f", total);

    return 0;
}