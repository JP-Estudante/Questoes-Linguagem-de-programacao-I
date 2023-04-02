/*Faça um programa que leia os dados de 10 alunos (Nome, matricula, Media
Final), armazenando em um vetor. Uma vez lidos os dados, divida estes dados
em 2 novos vetores, o vetor dos aprovados e o vetor dos reprovados,
considerando a media mínima para a aprovação como sendo 5.0. Exibir na tela
os dados do vetor de aprovados, seguido dos dados do vetor de reprovados. */
#include <stdio.h>

    struct AlunoInformacoes{
        char nome[20];
        int matricula, mediaFinal;
    };

int main(){
    struct AlunoInformacoes dados[10];
    struct AlunoInformacoes apv[10];
    struct AlunoInformacoes rpv[10];

    int contAPV = 0, contRPV = 0;

    for (int i = 0; i < 2; i++){
        fflush(stdin);
        printf("Nome: ");
            gets(dados[i].nome);

        fflush(stdin);
        printf("Matricula: ");
            scanf(" %d",&dados[i].matricula);

        fflush(stdin);
        printf("Media Final: ");
            scanf(" %d",&dados[i].mediaFinal);
        printf("\n\n");

    }

    for (int i = 0; i < 2; i++){
        if (dados[i].mediaFinal < 5)
        rpv[contRPV] = dados[i];
        contRPV++;
    }

    for (int i = 0; i < 2; i++){
        if (dados[i].mediaFinal >= 5)
        apv[contAPV] = dados[i];
        contAPV++;
    }


    printf("\n\nAPROVADOS");
        for (int i = 0; i < 2; i++){
            printf("\nNome: %s",apv[contAPV].nome);
            printf("\nMatricula: %d",apv[contAPV].matricula);
            printf("\nMedia Final: %d",apv[contAPV].mediaFinal);
            printf("\n\n");
    }

    printf("\n\nREPROVADOS");
        for (int i = 0; i < 2; i++){
            printf("\nNome: %s",rpv[contRPV].nome);
            printf("\nMatricula: %d",rpv[contRPV].matricula);
            printf("\nMedia Final: %d",rpv[contRPV].mediaFinal);
            printf("\n\n");
    }
}