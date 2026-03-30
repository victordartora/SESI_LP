#include <stdio.h>

int main(){
    int num1, num2, soma;
    
    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%i", &num2);
    
    soma= num1 + num2;
    
    printf("A soma é: %i", soma);
    
    return 0;
    
}