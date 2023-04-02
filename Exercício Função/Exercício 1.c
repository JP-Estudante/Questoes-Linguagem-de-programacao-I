/*Escreva uma função que receba dois números inteiros retorne o menor
número*/
#include <stdio.h>
int menorNumero(numero1, numero2);
int main(){
int numero1, numero2, menor;

printf("Digite um numero: ");
    scanf("%d",&numero1);

printf("Digite outro numero: ");
    scanf("%d",&numero2);


printf("O menor numero e %d",menor = menorNumero(numero1, numero2));
}

int menorNumero(int numero1,int numero2){
    int menor;
        if (numero1 < numero2){
            return numero1;
        }
        else{
            return numero2;
        }
}
