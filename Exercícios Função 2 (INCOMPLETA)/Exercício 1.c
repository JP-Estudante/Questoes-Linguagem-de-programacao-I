/*Escreva um programa que solicite dois números do tipo inteiro distintos ao usuário e
que apresente na tela o maior deles. Esse programa deve possuir uma função para
verificar qual é o maior número.*/
#include <stdio.h>
int funcaoMaior(int numero1, int numero2);

int main(){
    int numero1, numero2, resultado;
    printf("Primeiro numero inteiro: ");
        scanf("%d",&numero1);

    printf("Segundo numero inteiro: ");
        scanf("%d",&numero2);

resultado = funcaoMaior(numero1, numero2);
    printf("O maior e %d",resultado);
}
int funcaoMaior(int numero1, int numero2){
    if (numero1 > numero2){
        return numero1;
    }
    else if(numero2 > numero1){
        return numero2;
    }
}
