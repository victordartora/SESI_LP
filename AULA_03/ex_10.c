/*10) Peça dois números e mostre todos os números entre eles.
*/

#include <stdio.h>

int main() {
    int num1, num2, i;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    for(i = num1; i <= num2; i++) {
        printf("%d\n", i);
    }

    return 0;
}