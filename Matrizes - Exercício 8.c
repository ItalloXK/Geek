#include <stdio.h>
#include <stdlib.h>
/*
8 - Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da
diagonal principal.
*/
int main(){
	int i, j, matriz[3][3], soma = 0;
	
	printf("\nDigite os valores da matriz: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		scanf("%d", &matriz[i][j]);
		getchar();
		}
	}
	printf("\nA matriz eh: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d	", matriz[i][j]);
		}
		printf("\n\n");
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(i  < j ){
			soma = soma + matriz[i][j];
			}
		}
	}
	printf("\nA soma dos valores acima da diagonal principal eh: %d", soma);
	return 0;
}
