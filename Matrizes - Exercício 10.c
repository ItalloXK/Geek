#include <stdio.h>
#include <stdlib.h>
/*
10. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diago-
nal principal.
*/
int main(){
	int i, j, matriz[3][3], somaDiagonal=0;
	
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
			if(i==j){
			somaDiagonal = somaDiagonal + matriz[i][j];
			}
		}
	}
	printf("\nA soma dos valores da diagonal principal eh: %d", somaDiagonal);
	return 0;
}
