#include <stdio.h>
#include <stdlib.h>
/*
6. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição
das matrizes lidas.
*/
int main(){
	int i, j, matrizA[4][4], matrizB[4][4], matrizC[4][4];
	
	printf("Digite os valores da primeira matriz: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		scanf("%d", &matrizA[i][j]);
		getchar();
		}
	}
	printf("Digite os valores da segunda matriz: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		scanf("%d", &matrizB[i][j]);
		getchar();
		}
	}
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(matrizA[i][j]>=matrizB[i][j]){
				matrizC[i][j]=matrizA[i][j];
			}else{
				matrizC[i][j]=matrizB[i][j];
			}
		}
	}
	printf("\nA primeira matriz eh: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d  ", matrizA[i][j]);
		}
		printf("\n");
	}
	
	printf("\nA segundaa matriz eh: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d  ", matrizB[i][j]);
		}
			printf("\n");
	}
	
	printf("\nA matriz com os maiores valores eh: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d  ", matrizC[i][j]);
		}
			printf("\n");
	}
	return 0;
}
