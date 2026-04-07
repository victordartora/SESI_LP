/*21) Crie um menu simples com opções:
1: Dizer "Olá"
2: Dizer "Tudo bem?"
3: Sair
O programa deve repetir até o usuário escolher sair.*/

#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Dizer Ola\n");
        printf("2 - Dizer Tudo bem?\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("Ola!\n");
        } 
        else if(opcao == 2) {
            printf("Tudo bem?\n");
        } 
        else if(opcao == 3) {
            printf("Saindo do programa...\n");
        } 
        else {
            printf("Opcao invalida!\n");
        }

    } while(opcao != 3);

    return 0;
}