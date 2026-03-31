/*10) Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:
Abaixo do peso (< 18.5)
Normal (18.5–24.9)
Sobrepeso (25–29.9)
Obesidade (≥ 30)*/

#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5)
        printf("Abaixo do peso\n");
    else if (imc <= 24.9)
        printf("Normal\n");
    else if (imc <= 29.9)
        printf("Sobrepeso\n");
    else
        printf("Obesidade\n");

    return 0;
}