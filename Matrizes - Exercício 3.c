#include <stdio.h>
#include <stdlib.h>
/*
3 - Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
coluna de cada elemento. Em seguida, imprima na tela a matriz.
*/
int main(){
	int i, j, matriz[4][4];
  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      matriz[i][j] = i + 1  * j + 1;
    }
  }
  printf("A matriz com o produto do valor da linha e da coluna de cada elemento eh: \n\n");
  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      printf("%d  ", matriz[i][j]);
    }
    printf("\n\n");
  }
	return 0;
}
