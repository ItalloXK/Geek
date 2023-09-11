#include <stdio.h>
#include <stdlib.h>
/*
5. Leia uma matriz 5x 5. Leia também um valor X. O programa deverá fazer uma busca
desse valor na matriz é, ao final, escrever a localização (linha e coluna) ou uma mensa-
gem de "não encontrado”.

*/
int main(){
	int i, j, cont=0, posicaoLinha, posicaoColuna, matriz[5][5], valorX;
	
	printf("Digite os valores: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &matriz[i][j]);
			getchar();
		}
	}
	printf("\nA matriz eh: \n\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
		printf("Digite o valor a ser procurado: ");
		scanf("%d", &valorX);
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(matriz[i][j]==valorX){
				posicaoLinha = i; posicaoColuna=j;
				cont++;
			}
		}
	}
	if(cont>=1){
	printf("\nO valor esta em:\nLinha: %d\nColuna:%d",posicaoLinha+1,posicaoColuna+1);
	}else{
			printf("Valor nao encontrado!");
		}
	return 0;
}
