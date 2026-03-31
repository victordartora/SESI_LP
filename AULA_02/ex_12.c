/*12) Cálculo de Salário com Bônus
Leia o salário:
Se maior que 3000 → bônus de 5%
Caso contrário → bônus de 10%
Exiba o salário final.
*/

#include <stdio.h>

int main() {
    float salario, bonus, salarioFinal;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario > 3000) {
        bonus = salario * 0.05;
    } else {
        bonus = salario * 0.10;
    }

    salarioFinal = salario + bonus;

    printf("Salario final com bonus: %.2f\n", salarioFinal);

    return 0;
}