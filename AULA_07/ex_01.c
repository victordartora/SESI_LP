#include <stdio.h>

int adicao(int a, int b){
    return a + b;
}

int multiplicacao(int a, int b){
    return a * b;
}

int subtracao(int a, int b){
    return a - b;
}
    
int divisao(int a, int b){
    return a / b;
}

int main(){
    void imprimirValores(int valor);
    int n1, n2;
    int soma=0;
    
    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);
    
    soma= adicao(n1, n2);
    
    printf("A soma dos dois valores: %i", soma);
    printf("\n n1 + n2 = %i", adicao(n1, n2));
    
    printf("\n");
     printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);
    
    soma= multiplicacao(n1, n2);
    
    printf("\n");
    printf("A multiplicacao dos dois valores: %i", soma);
    printf("\n n1 * n2 = %i", multiplicacao(n1, n2));
    
    printf("\n");
     printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);
    
    soma= subtracao(n1, n2);
    
    printf("A subtracao dos dois valores: %i", soma);
    printf("\n n1 - n2 = %i", subtracao(n1, n2));
    
    printf("\n");
     printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);
    
    soma= divisao(n1, n2);
    
    printf("A divisao dos dois valores: %i", soma);
    printf("\n n1 / n2 = %i", divisao(n1, n2));
    
    return 0;
}