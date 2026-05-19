#include <stdio.h>
#include <stdlib.h>

int vida = 100;
int agua = 0;
int comida = 0;
int ferimentos = 0;

void status() {
    printf("\n========================\n");
    printf("VIDA: %d | AGUA: %d | COMIDA: %d\n", vida, agua, comida);
    printf("========================\n");
}

void morrer(const char *msg) {
    printf("\n💀 %s\n", msg);
    printf("FIM DE JOGO.\n");
    exit(0);
}

void ganhar(const char *msg) {
    printf("\n🏆 %s\n", msg);
    printf("VOCÊ SOBREVIVEU!\n");
    exit(0);
}

void dano(int valor, const char *msg) {
    vida -= valor;
    ferimentos++;

    printf("\n⚠️ %s (-%d vida)\n", msg, valor);

    if (vida <= 0)
        morrer("Seus ferimentos foram fatais.");
}

void instrucoes() {

    printf("\n=========== INSTRUÇÕES ===========\n");
    printf("Seu objetivo é sobreviver na floresta.\n");
    printf("Gerencie sua vida, água e comida.\n");
    printf("Cada escolha altera seu destino.\n");
    printf("==================================\n");
}

int main() {

    int escolha;
    int menu;

    // MENU INICIAL
    do {

        printf("\n====================================\n");
        printf("      🌲 SURVIVAL: LOST MEMORY 🌲\n");
        printf("====================================\n");

        printf("\n1 - Iniciar jogo\n");
        printf("2 - Instruções\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &menu);

        switch(menu) {

            case 1:
                printf("\nIniciando jogo...\n");
                break;

            case 2:
                instrucoes();
                break;

            case 3:
                printf("\nSaindo do jogo...\n");
                return 0;

            default:
                printf("\nOpção inválida.\n");
        }

    } while(menu != 1);

    printf("\nVocê acorda em uma floresta desconhecida.\n");
    printf("Sua cabeça dói e você não lembra de nada.\n");

    // LOOP INICIAL
    for (int i = 0; i < 3; i++) {

        status();

        printf("\nVocê decide:\n");
        printf("1 - Explorar a floresta\n");
        printf("2 - Procurar água\n");
        printf("3 - Procurar comida\n");
        printf("4 - Seguir sons distantes\n");
        printf("5 - Ficar parado e descansar\n");
        printf("Escolha: ");

        scanf("%d", &escolha);

        if (escolha == 1) {

            dano(15, "Você se machuca em espinhos");

        }
        else if (escolha == 2) {

            printf("Você encontra uma fonte de água.\n");
            agua++;

        }
        else if (escolha == 3) {

            printf("Você encontra frutas e raízes.\n");
            comida++;

        }
        else if (escolha == 4) {

            printf("Você ouve algo estranho... passos na mata.\n");
            break;

        }
        else if (escolha == 5) {

            printf("Você descansa um pouco e recupera energia.\n");
            vida += 10;

        }
        else {

            printf("Escolha inválida.\n");
        }

        if (vida <= 0)
            morrer("Você não resistiu na floresta.");
    }

    // ENCONTRO 1
    printf("\n🌫 Você encontra uma trilha dividida.\n");

    printf("1 - Seguir trilha da esquerda (rio)\n");
    printf("2 - Seguir trilha da direita (fumaça)\n");
    printf("3 - Voltar para a floresta\n");
    printf("Escolha: ");

    scanf("%d", &escolha);

    if (escolha == 1) {

        printf("\nVocê chega a um rio perigoso.\n");

        printf("1 - Beber água\n");
        printf("2 - Construir uma jangada\n");
        printf("3 - Ignorar e seguir rio acima\n");

        scanf("%d", &escolha);

        if (escolha == 1) {

            agua++;
            printf("Água coletada.\n");

        }
        else if (escolha == 2) {

            if (comida > 0) {

                printf("Você usa comida como suporte e atravessa o rio!\n");
                comida--;

            } else {

                morrer("A jangada falhou e você se afogou.");
            }

        }
        else if (escolha == 3) {

            dano(20, "Correnteza forte te derruba");
        }
    }

    else if (escolha == 2) {

        printf("\nVocê encontra uma CABANA abandonada.\n");

        printf("1 - Entrar\n");
        printf("2 - Espiar primeiro\n");
        printf("3 - Ignorar\n");

        scanf("%d", &escolha);

        if (escolha == 1) {

            printf("Você encontra suprimentos!\n");

            agua += 2;
            comida += 2;

        }
        else if (escolha == 2) {

            printf("Você vê pegadas recentes... alguém esteve aqui.\n");

            dano(10, "Você se assusta e cai");

        }
        else {

            printf("Você continua andando, mas sente que está sendo observado...\n");
        }
    }

    else {

        printf("\nVocê volta para a floresta densa...\n");

        dano(10, "Se perde no caminho");
    }

    // ENCONTRO 2
    printf("\n🌙 Anoitece rapidamente...\n");

    printf("1 - Montar abrigo\n");
    printf("2 - Continuar andando no escuro\n");
    printf("3 - Fazer fogo\n");

    scanf("%d", &escolha);

    if (escolha == 1) {

        printf("Você se protege da noite.\n");

    }
    else if (escolha == 2) {

        dano(25, "Você se machuca na escuridão");

    }
    else if (escolha == 3) {

        if (comida > 0) {

            printf("Você usa recursos e cria fogo.\n");
            comida--;

        } else {

            printf("Você consegue um fogo fraco.\n");
        }
    }

    if (vida <= 0)
        morrer("A noite foi fatal.");

    // ENCONTRO FINAL
    printf("\n☀️ Ao amanhecer você encontra um helicóptero de resgate ao longe!\n");

    printf("1 - Correr até ele\n");
    printf("2 - Sinalizar com fogo\n");
    printf("3 - Ignorar e procurar outro caminho\n");

    scanf("%d", &escolha);

    if (escolha == 1) {

        if (vida > 60) {

            ganhar("Você chegou ao resgate a tempo!");

        } else {

            morrer("Você caiu no caminho e não conseguiu chegar.");
        }
    }
    else if (escolha == 2) {

        if (agua > 0 || comida > 0) {

            ganhar("O helicóptero viu seu sinal e te resgatou!");

        } else {

            morrer("O sinal falhou e ninguém viu você.");
        }
    }
    else if (escolha == 3) {

        morrer("Você se perdeu novamente na floresta.");
    }

    return 0;
}