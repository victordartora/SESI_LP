#include <stdio.h>

int main() {
	int matriz[3][3];

	// 	printf("Digite valor de linha: %i, Coluna: %i: ", 1,1 );
	// 	scanf("%i", &matriz[0][0]);

	// 	printf("\n %i", matriz[0][0]);


	for(int l=0; l< 3; l++) {

		for(int c=0; c< 3; c++) {
			printf("Digite valor de linha: %i, Coluna: %i: ", l +1, c+1);
			scanf("%i", &matriz[l][c]);
		}

	}


	for(int l=0; l< 3; l++) {
		for(int c=0; c< 3; c++) {
			printf(" | %i", matriz[l][c]);
		}
		printf("\n");
	}



}