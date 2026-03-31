/*3) Maior entre dois números.
Leia dois números inteiros e informe qual é o maior ou se são iguais.*/

#include <stdio.h>

int main() {
      int a, b;
      
      printf("Digite o primeiro numero: ");
      scanf("%i", &a);
      
      printf("Digite o segundo numero: ");
      scanf("%i", &b);
      
      if (a > b) {
          printf("O maior numero é: %i\n", a);
      } else if(b > a) {
          printf("o maior numero é: %i\n", b);
       } else{
            printf("Os dois numeros sao iguais\n");
        }
        
        return 0;
    }