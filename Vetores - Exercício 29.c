#include <stdio.h>
#include <stdlib.h>
/*
  29 - Faça um programa que receba 6 números inteiros e mostre: 
	1- Os números pares digitados;
	2- A soma dos números pares digitados;
	3- Os números ímpares digitados;
	4- A quantidade de números ímpares digitados;
*/
int main(){
	int i, vetor[20], somaPares=0, contImpares=0;
	
	printf("Digite seis valores inteiro: \n");
	for(i=0; i<6; i++){
		scanf("%d", &vetor[i]);
		getchar();
	}
	for(i=0; i<6; i++){
		if(vetor[i]%2==0){
			printf("\nOs pares sao: %d \n", vetor[i]);
			somaPares = somaPares + vetor[i];
		}
		if(vetor[i]%2!=0){
			printf("\nOs impares sao: %d \n", vetor[i]);
			contImpares++;
		}
	}
	printf("A soma dos numeros pares eh: %d\n", somaPares);
	printf("A quantidade de numero impares eh: %d\n", contImpares);
	return 0;
}
