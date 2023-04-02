/*Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura*/
#include <stdio.h>
#include <locale.h>

struct Informacoes{
    char nome[30], endereco[30];
    int idade;
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    struct Informacoes info;

    printf("Nome: ");
    fflush(stdin);
    fgets(info.nome, 30, stdin);

    printf("Idade: ");
    scanf(" %d",&info.idade);

    printf("Endereço: ");
    fflush(stdin);
    fgets(info.endereco, 30, stdin);

    printf("\nNome: %sIdade: %d \nEndereço: %s",info.nome, info.idade, info.endereco);
}