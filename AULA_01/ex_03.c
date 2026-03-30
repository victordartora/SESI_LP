#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
     printf("Primeira nota1: ");
    scanf("%f", &nota1);
    
    printf("Segunda nota2: ");
    scanf("%f", &nota2);
    
    printf("Terceira nota3: ");
    scanf("%f", &nota3);
    
    media= (nota1 + nota2 + nota3) / 3;
    
    printf("A media é: %.2f", media);
    
    if(media >=7.0){
        printf("Aprovado");
    }else if (media<=2.9){
        printf("Reprovado");
    }else if (media <=6.9){
        printf("Recuperação");
    }
   
   return 0;
}