/*15) Verificação de Maioridade para Votação
Leia a idade e informe:
Não pode votar (< 16)
Voto opcional (16–17 ou > 70)
Voto obrigatório (18–70)*/

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 16)
        printf("Nao pode votar");
    else if ((idade >= 16 && idade <= 17) || idade > 70)
        printf("Voto opcional");
    else
        printf("Voto obrigatorio");

    return 0;
}

