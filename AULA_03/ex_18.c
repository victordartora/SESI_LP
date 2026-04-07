/*18) Solicite várias idades até o usuário digitar 0. Calcule a média das idades.*/

#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    int contador = 0;
    float media;

    printf("Digite uma idade (0 para parar): ");
    scanf("%d", &idade);

    while(idade != 0) {
        soma = soma + idade;
        contador++;

        printf("Digite uma idade (0 para parar): ");
        scanf("%d", &idade);
    }

    media = (float)soma / contador;

    printf("A média das idades é: %.2f\n", media);

    return 0;
}