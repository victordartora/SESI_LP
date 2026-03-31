/*4) Verificação de Aprovação
Leia a nota de um aluno (0 a 10).
Informe:
Aprovado (nota >= 7)
Recuperação (nota entre 5 e 6.9)
Reprovado (nota < 5)*/

#include <stdio.h>

int main(){
    float nota;
    
    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);
    
    if(nota >=7.0){
        printf("Aprovado");
    }else if (nota<=5.0){
        printf("Reprovado");
    }else if (nota <=6.9){
        printf("Recuperação");
    }
   
   return 0;
}