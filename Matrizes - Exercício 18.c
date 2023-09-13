#include <stdio.h>
#include <stdlib.h>
/*
18 - Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números
inteiros. Em seguida, gere um array unidimensional pela soma dos números de cada
coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:
5 -8 10
1 2 15
25 10 7
Vai gerar um vetor, onde cada posição é a soma das colunas da matriz. A primeira
posição será 5 + 1 + 25, e assim por diante:	31   4   32
*/

int main(){
	int i, j, matriz[3][3], somarColunas[3];
	
	printf("Digite os valores: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Posicao: [%d][%d] ", i+1,j+1);
			scanf("%d", &matriz[i][j]);
			getchar();
		}
	}
	printf("\nA matriz eh: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d	", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<3; i++){
		somarColunas[i] = 0;
	}
	// Calcule a soma das colunas e armazene no vetor somaColunas
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            somarColunas[j] += matriz[i][j];
        }
    }
  // Exiba o vetor de soma das colunas
    printf("Vetor de soma das colunas:\n");
    for ( i = 0; i < 3; i++) {
        printf("%d ", somarColunas[i]);
    }
    printf("\n");
    return 0;		
}
