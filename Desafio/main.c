#include <stdio.h>

int main() {
    int n;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    char nomes[n][50];
    float medias[n], maior[n], menor[n];
    int situacao[n]; // 0 = Reprovado, 1 = Recuperacao, 2 = Aprovado

    float somaTurma = 0;

    for (int i = 0; i < n; i++) {
        int qtd;
        float nota, soma = 0;

        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", nomes[i]);

        printf("Quantidade de provas: ");
        scanf("%d", &qtd);

        for (int j = 0; j < qtd; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &nota);

            soma += nota;

            if (j == 0) {
                maior[i] = nota;
                menor[i] = nota;
            } else {
                if (nota > maior[i]) maior[i] = nota;
                if (nota < menor[i]) menor[i] = nota;
            }
        }

        medias[i] = soma / qtd;
        somaTurma += medias[i];

        // Situação
        if (medias[i] >= 7)
            situacao[i] = 2;
        else if (medias[i] >= 5)
            situacao[i] = 1;
        else
            situacao[i] = 0;
    }

    int melhor = 0, pior = 0;

    for (int i = 1; i < n; i++) {
        if (medias[i] > medias[melhor]) melhor = i;
        if (medias[i] < medias[pior]) pior = i;
    }

    printf("\nRelatorio:\n\n");

    for (int i = 0; i < n; i++) {
        printf("%s - Media: %.2f | Maior: %.2f | Menor: %.2f | ",
               nomes[i], medias[i], maior[i], menor[i]);

        if (situacao[i] == 2)
            printf("Aprovado\n");
        else if (situacao[i] == 1)
            printf("Recuperacao\n");
        else
            printf("Reprovado\n");
    }

    printf("\nMedia da turma: %.2f\n", somaTurma / n);
    printf("Melhor aluno: %s\n", nomes[melhor]);
    printf("Pior aluno: %s\n", nomes[pior]);

    return 0;
}