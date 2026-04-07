/*20) Faça um programa que peça uma senha até que o usuário acerte (senha fixa no código).*/

#include <stdio.h>

int main() {
    int senha;
    int senha_correta = 1234;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while(senha != senha_correta) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");

    return 0;
}