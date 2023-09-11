#include <stdio.h>
#include <stdlib.h>
/*
1. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*/
int main(){
	int i,j, matriz[100][100], contador;
	
	printf("Digite os valores da matriz 4x4\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			scanf("%d", &matriz[i][j]);
			getchar();
			if(matriz[i][j]> 10){
				contador++;
			}
		}
	}
	printf("A matriz eh: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\nA quantidade de numeros maiores que dez eh: %d", contador);
	return 0;
}
