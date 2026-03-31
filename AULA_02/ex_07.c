/*7) Verificação de Triângulo
Leia três valores e verifique se podem formar um triângulo.
Caso formem, classifique como:
Equilátero
Isósceles
Escaleno*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite três lados: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Equilátero\n");
        else if (a == b || a == c || b == c)
            printf("Isósceles\n");
        else
            printf("Escaleno\n");
    } else {
        printf("Não forma triângulo\n");
    }

    return 0;
}