/*11) Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num2 != 0) {
        if (num1 % num2 == 0) {
            printf("%d e multiplo de %d\n", num1, num2);
        } else {
            printf("%d nao e multiplo de %d\n", num1, num2);
        }
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}