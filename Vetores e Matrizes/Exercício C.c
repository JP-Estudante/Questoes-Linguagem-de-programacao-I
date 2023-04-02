/*Elaborar um programa que leia 20 elementos para uma matriz qualquer, considerando que
essa matriz tenha o tamanho de quatro linhas por cinco colunas, em seguida apresentar a
matriz.*/
#include <stdlib.h>
#include <stdio.h>

void main(){
    int i, j, matriz[4][5];
        printf("**Elementos da Matriz**\n\n");
        for (i = 0; i < 4; i++){
            for (j = 0; j < 5; j++){
                printf("   Matriz [%d][%d]: ",i,j);
                scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }
        for (i = 0; i < 4; i++){
            for (j = 0; j < 5; j++){
            printf(" %d ",matriz[i][j]);
        }
        printf("\n");
    }
}