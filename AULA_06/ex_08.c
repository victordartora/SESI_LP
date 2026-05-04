#include <stdio.h>

int main() {
    float n[10], soma = 0, media;
    int i;

    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        printf("%d. Numero: ", i+1);
        scanf("%f", &n[i]);
        soma += n[i];
    }

    media = soma / 10; 
    printf("A media eh: %.2f\n", media); 
    
    for(int i=0; i< 10; i++){
        if(n[i] > media ){
            printf("\n%f", n[i]);    
        }
    }
    

    return 0;
}