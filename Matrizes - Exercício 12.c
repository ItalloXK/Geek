#include <stdio.h>
#include <stdlib.h>
//12. Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.
int main(){
	int i, j, matriz[3][3];

  printf("Digite os valores da matriz: \n");
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      scanf("%d", &matriz[i][j]);
      getchar();
    }
  }
  printf("A matriz digitada eh: \n\n");
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      printf("%d  ", matriz[i][j]);
    }
    printf("\n\n");
  }
  printf("A matriz transposta eh: \n\n");
  for(j=0; j<3; j++){
    for(i=0; i<3; i++){
      printf("%d  ", matriz[i][j]);
    }
    printf("\n\n");
  }
	return 0;
}
