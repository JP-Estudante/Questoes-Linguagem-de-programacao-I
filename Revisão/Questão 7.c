/*Faça um programa que realize a leitura dos seguintes dados relativos a um
conjunto de alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2.
Considere uma turma de ´ ate 10 alunos. Após ler todos os dados digitados, e
depois de armazená-los em um vetor ´ de estrutura, exibir na tela a listagem final
dos alunos com as suas respectivas medias ´ finais (use uma media ponderada:
Nota1 com peso=1.0 e Nota2 com peso=2.0).*/
#include <stdio.h>

struct ConjuntoAlunos{
    char nome[20];
    int matricula, codigo, nota1, nota2, media, mediaPonderada; 
};

int main(){
    struct ConjuntoAlunos alunos[10];
    int i;

    for (i = 0; i < 10; i++){
        printf("Matricula: ");
            scanf("%d",&alunos[i].matricula);
        
        fflush(stdin);        
        printf("Nome: ");
            gets(alunos[i].nome);
        
        printf("Codigo da Disciplina: ");
            scanf("%d",&alunos[i].codigo);

        printf("Nota 1: ");
            scanf("%d",&alunos[i].nota1);

            
        printf("Nota 2: ");
            scanf("%d",&alunos[i].nota2);

            alunos[i].media = (1 * alunos[i].nota1) + (2 * alunos[i].nota2);
            alunos[i].mediaPonderada = alunos[i].media/3;
    }

    for (i = 0; i < 10; i++){
        printf("\n\n\n\nMatricula: %d",alunos[i].matricula);

        printf("\nNome: %s",alunos[i].nome);

        printf("\nCodigo da Disciplina: %d",alunos[i].codigo);

        printf("\nNota 1: %d",alunos[i].nota1);

        printf("\nNota 2: %d",alunos[i].nota2);

        printf("\nMedia Ponderada: %d",alunos[i].mediaPonderada);
    }
}