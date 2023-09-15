#include <stdio.h>
/*
21. Faça um programa que leia duas matrizes 2 x 2 com valores reais. Ofereça ao usuário
um menu de opções:
(a) somar as duas matrizes
(b) subtrair a primeira matriz da segunda
(c) adicionar uma constante às duas matrizes
(d) imprimir as matrizes
*/
int main(){
  int i , j, escolha, constante;
  float matrizA[2][2], matrizB[2][2], matrizSoma[2][2], matrizSubtracao[2][2];
  //LENDO OS VALORES DA MATRIZ
  printf("Digite os valores da primeira matriz: \n");
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      printf("Posicao: [%d][%d] ", i+1,j+1);
      scanf("%f", &matrizA[i][j]);
      getchar();
    }
  }
  printf("Digite os valores da segunda matriz: \n");
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      printf("Posicao: [%d][%d] ", i+1,j+1);
      scanf("%f", &matrizB[i][j]);
      getchar();
    }
  }
  
  //IMPRIMINDO AS MATRIZES
  printf("Os valores da primeira matriz sao: \n\n");
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      printf("%.2f  ", matrizA[i][j]);
    }printf("\n\n");
  }
printf("Os valores da segunda matriz sao: \n\n");
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      printf("%.2f  ", matrizB[i][j]);
    }printf("\n\n");
  }
  
  //EXIBINDO O MENU
  printf("Digite 1 para somar as matrizes!\n\nDigite 2 para subtrair a primeira matriz da segunda matriz!\n\nDigite 3 para adicionar uma constante para as duas matrizes!\n\n");
  scanf("%d", &escolha);
  
  switch(escolha){
    case 1:
      printf("O resultado da soma eh: \n\n");
      for(i=0; i<2; i++){
        for(j=0; j<2; j++){
         matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
      }
      for(i=0; i<2; i++){
        for(j=0; j<2; j++){
          printf("%.2f  ", matrizSoma[i][j]);
        }printf("\n\n");
      }
      break;
    case 2:
      printf("O resultado da subtracao eh: \n\n");
      for(i=0; i<2; i++){
        for(j=0; j<2; j++){
         matrizSubtracao[i][j] = matrizB[i][j] - matrizA[i][j];
        }
      }
      for(i=0; i<2; i++){
        for(j=0; j<2; j++){
          printf("%.2f  ", matrizSubtracao[i][j]);
        }printf("\n\n");
      }
	break;
    case 3:
      printf("Digite a constante: ");
      scanf("%d", &constante);
      printf("\nA primeira matriz com a constante adicionada eh: \n\n");
      for(i=0; i<2; i++){
        for(j=0; j<2; j++){
          matrizA[i][j] = matrizA[i][j] + constante;
          matrizB[i][j] = matrizB[i][j] + constante;
        }
      }
      for(i=0; i<2; i++){
        for(j=0; j<2; j++){
          printf("%.2f  ", matrizA[i][j]);
        }printf("\n\n");
      }
      printf("\nA segunda matriz com a constante adicionada eh: \n\n");
      for(i=0; i<2; i++){
        for(j=0; j<2; j++){
          printf("%.2f  ", matrizB[i][j]);
        }printf("\n\n");
      }
      break;
  }
  return 0;
}
