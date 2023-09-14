#include <stdio.h>
#include <stdlib.h>
/*
20. Faça programa que leia uma matriz 3 x 6 com valores reais.
(a) Imprima a soma de todos os elementos das colunas ímpares.
(b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
(d) Imprima a matriz modificada.
*/
int main(){
	int i,j, cont=0;
	float somarColunas=0, matriz[4][8], media=0,somaUMeDOIS=0, matrizModificada[4][8];
	
	printf("Digite os valores da matriz: \n");
	for(i=0; i<3; i++){
		for(j=0; j<6; j++){
			scanf("%f", &matriz[i][j]);
			getchar();
			matrizModificada[i][j] = matriz[i][j];
		}
	}
	printf("A matriz eh: \n\n");
	for(i=0; i<3; i++){
		for(j=0; j<6; j++){
			printf("%.2f	", matriz[i][j]);
		}
		printf("\n\n");
	}
	//LAÇO DA SOMA DAS COLUNAS
	for(i=0; i<3; i++){
		for(j=0; j<6; j++){
			if((j+1)%2!=0){
				somarColunas = somarColunas + matriz[i][j];
			}
		}
	}
	printf("\nA soma de todos os elementos das colunas impares eh: %.2f\n", somarColunas);
	//Imprima a média aritmética dos elementos da segunda e quarta colunas.
	for(i=0; i<3; i++){
		for(j=0; j<6; j++){
			if(j+1==2||j+1==4){
				cont++;
				media = media + matriz[i][j];
			}
		}
	}
	printf("\nA media das colunas 2 e 4 eh: %.2f\n", media/cont);
	//Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
	for(i=0; i<3; i++){
		for(j=0; j<6; j++){
			if(j+1==1||j+1==2){
			somaUMeDOIS = somaUMeDOIS + matriz[i][j];
			}
		}
	}
	printf("\nA soma de todos os elementos das colunas 1 e 2 eh: %.2f\n\n",somaUMeDOIS);
	//SUBSTITUINDO A COLUNA 6
	for(i=0; i<3; i++){
		for(j=0; j<6; j++){
			if(j+1==6){
			matrizModificada[i][j]=somaUMeDOIS;
			}
		}
	}
	//PRINTANDO A MATRIZ MODIFICADA
	printf("A  matriz modificada eh: \n\n");
	for(i=0; i<3; i++){
		for(j=0; j<6; j++){
			printf("%.2f	", matrizModificada[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
