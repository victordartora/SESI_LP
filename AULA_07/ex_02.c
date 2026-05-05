#include <stdio.h>

int adicao(int a, int b) {
	return a + b;
}

int multiplicacao(int a, int b) {
	return a * b;
}

int subtracao(int a, int b) {
	return a - b;
}

int divisao(int a, int b) {
	return a / b;
}

int main() {
	float a, b;
	int op;

	while (op != 0) {
		printf("-----------------------------------------------------\n");
		printf(" 1-Soma 2-Subtracao 3-Multiplicacao 4-Divisao 0-Sair\n");
		printf("-----------------------------------------------------\n");
		scanf("%d", &op);

		if (op == 0) {
			printf("Fechando o programa...\n");
			break;
		}

		printf("Digite dois numeros: ");
		scanf("%f %f", &a, &b);

		if (op == 1)
			printf("Resultado: %.2f\n", a + b);

		else if (op == 2)
			printf("Resultado: %.2f\n", a - b);

		else if (op == 3)
			printf("Resultado: %.2f\n", a * b);

		else if (op == 4) {
			if (b == 0) {
				printf("Erro: Divisao por zero.\n");
			} else {
				printf("Resultado: %.2f\n", a / b);
			}
		}

		else {
			printf("Opcao invalida.\n");
		}

		printf("\n");
	}

	return 0;
}