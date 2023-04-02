#include <stdio.h>

    struct Alunos{
        char nome[30];
        float matematica, fisica, media;
    };

int main(){

    struct Alunos alunos[5];
    int count;
    
    for (count = 0; count < 5; count++){ 
        fflush(stdin);
        printf("\nNome do Aluno %d: ",count+1);
        gets(alunos[count].nome);
        printf("Notas de matematica: ");
        scanf(" %f",&alunos[count].matematica);
        printf("Nota de fisica: ");
        scanf(" %f",&alunos[count].fisica);
        alunos[count].media = (alunos[count].matematica + alunos[count].fisica)/2;
    }
    printf("\nExibindo nomes e medias:");
    for (count = 0; count<5; count++){
        printf("Aluno %d\n", count+1);
        printf("Nome: %s\n",alunos[count].nome);
        printf("Media: %2.f\n",alunos[count].media);
    }
    return 0;
}