/*Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com cinco
linhas e três colunas para valores inteiros. Construir uma matriz C de mesma dimensão, que
seja formada pela soma dos elementos da matriz A com os elementos da matriz B. Apresentar
os elementos da matriz C.*/

#include <stdio.h>
void main(){
    int i,j, matrizA[4][2], matrizB[4][2], matrizC[4][2];
    
      printf("**Elementos da Matriz A**\n\n");
    for (i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
        printf("   Matriz A[%d][%d]: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    }

    printf("\n\n**Elementos da Matriz B**\n\n");
    for (i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
        printf("   Matriz B[%d][%d]: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
    }

    for (i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            matrizC[i][j] = (matrizA[i][j] + matrizB[i][j]);
            printf("%d ",matrizC[i][j]);
        }
        printf("\n");
    }
        
}