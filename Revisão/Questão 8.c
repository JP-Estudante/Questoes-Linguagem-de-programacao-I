/*Utilizando uma estrutura, fa�a um programa que permita a entrada de nome,
endere�o e telefone de 5 pessoas e os imprima em ordem alfab�tica.*/
#include <stdio.h>

struct ListaTelefonica{
    char nome[20], endereco[30];
    int telefone;
};

int main(){
    struct ListaTelefonica lista[5];
    int i;
    for (i = 0; i < 5; i++){
        printf("Nome do contato: ");
            gets(lista[i].nome);

        printf("Telefone: ");
            scanf(" %d",&lista[i].telefone);

        fflush(stdin);
        printf("Endere�o: ");
            gets(lista[i].endereco);
        printf("\n\n");
    }

    printf("----------Lista Telefonica----------");
    for (i = 0; i < 5; i++){
        printf("\nNome do contato: %s",lista[i].nome);

        printf("\nTelefone: %d",lista[i].telefone);

        fflush(stdin);
        printf("\nEndere�o: %s",lista[i].endereco);
        printf("\n\n");
    }
}