#include <stdio.h>
#include <stdlib.h>

/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2,-5,7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] é A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

int main(){
	int vet[100], i, soma=0;
	
	printf("Digite os valores: \n");
		for(i=0; i<6;i++){
			scanf("%d", &vet[i]);
			fflush(stdin);
			soma = vet[0] + vet[1] + vet[5];
		}
	printf("\nA soma eh: %d", soma);
	
	vet[4]= 100;
	
	printf("\nos valores sao:");
	for(i =0; i<6; i++){
		printf("\n%d", vet[i]);
	}
	return 0;
}
