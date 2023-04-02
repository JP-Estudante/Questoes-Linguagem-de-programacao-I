/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matri?cula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral.
(d) Encontre o aluno com menor media geral.
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.*/
#include <stdio.h>
#include <locale.h>
#include <windows.h>

    struct AlunosCurso{
        int matricula, primeiraProva, segundaProva, terceiraProva; 
        char nome[50];
    };
    

int main(){
    setlocale(LC_ALL,"Portuguese");
    struct AlunosCurso ac[6];
    int maiorNota, maiorMedia, menorMedia;
        for (int i = 1; i < 6; i++){
            printf("\n-----Aluno Nº%d-----\n",i);
            fflush(stdin);
            printf("Matricula: ");
            //scanf(" %d",&ac[i].matricula);
            
            //fflush(stdin);
            //printf("Nome: ");
            //fgets(ac[i].nome, 50, stdin);
            
            printf("\n-----Informe as notas-----\n");
            Sleep(500);
            printf("1ª Prova: ");
            scanf("%d",&ac[i].primeiraProva);
            //printf("\n\nVar: %d\n\n",maiorNota);
            
                if(ac[i].primeiraProva > ac[1].primeiraProva){
                    maiorNota = ac[i].primeiraProva;
            }

            /*printf("2ª Prova: ");
            scanf(" %d",&ac[i].segundaProva);

            printf("3ª Prova: ");
            scanf(" %d",&ac[i].terceiraProva);*/

        }
        printf("\n\n\nMaior foi: %d",maiorNota);
}