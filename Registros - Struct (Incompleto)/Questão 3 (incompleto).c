/*Construa uma estrutura aluno com nome, numero de matricula e curso. Leia do usuario
a informação de 5 alunos, armazene em um vetor essa estrutura e imprima os dados na tela.*/
#include <stdio.h>
#include <locale.h>
#include <windows.h>

struct Aluno{
    char nome[50], curso[50];
    int matricula;
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    struct Aluno aluno[6];
                //Lendo do usuário
        for (int i = 1; i < 6; i++){
            printf("\n-----Aluno Nº%d-----\n",i);
            fflush(stdin);
            printf("Nome: ");
            fgets(aluno[i].nome, 50, stdin);

            printf("\nCurso: ");
            fgets(aluno[i].curso, 50, stdin);

            printf("\nMatricula: ");
            scanf(" %d",&aluno[i].matricula);
    }
        Sleep(500);
        system("\nPAUSE");
        system("cls");
                //imprimindo na tela
        for (int i = 1; i < 6; i++){
            printf("\n-----Aluno Nº%d-----\n",i);
            printf("Nome: %s",aluno[i].nome);

            printf("Matricula: %d",aluno[i].matricula);

            printf("\nCurso: %s\n",aluno[i].curso);    
            Sleep(1000);
    }
    
}