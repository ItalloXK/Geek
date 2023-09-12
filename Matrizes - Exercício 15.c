#include <stdio.h>
#include <stdlib.h>
/*
15- Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha,
referentes a 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de
respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas
de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a
pontuação correspondente a cada aluno.
*/
int main(){
	char matriz[5][10], gabarito[10];
	int i, j, resultado[10];
	printf("Digite as respostas dos alunos: \n");
	for(i=0; i<5; i++){
		for(j=0; j<10; j++){
			printf("Aluno %d, questao %d\n", i+1,j+1);
			scanf(" %c", &matriz[i][j]);
			getchar();
		}
	}
	printf("Digite o gabarito: \n");
	for(i=0; i<10; i++){
		scanf(" %c", &gabarito[i]);
		getchar();
	}
	printf("O gabarito eh: \n");
	for(i=0; i<10; i++){
		printf("%c	", gabarito[i]);
	}
	printf("\nA relacao dos alunos e respostas eh: \n");
	for(i=0; i<5; i++){
		printf("Aluno %d: ", i+1);
		for(j=0; j<10; j++){
			printf("%c ", matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<10; i++){	// inicializando todo o vetor com 0
		resultado[i]=0;
	}
	for(i=0; i<5; i++){
		for(j=0; j<10; j++){
			if(matriz[i][j] == gabarito[j]){
				resultado[i]++;
			}
		}
		printf("\nO resultado do aluno %d eh: %d\n", i+1, resultado[i]);
	}
	return 0;
}
