/*Escreva um programa em C que leia 5 valores inteiros e imprima para
cada um o seu correspondente valor absoluto. Para obter o valor absoluto
do número utilize a função Absoluto especificada abaixo 2:
Nome: Absoluto
Descrição: Retorna o valor absoluto do número fornecido.
Entrada: int n
Saída: (int) O respectivo valor absoluto de n.*/

#include <stdio.h>
int absoluto(int n);

int main(){
    int i, numero, resul;
    
    for(i = 0; i < 4; i++){
        printf("Digite um numero: ");
            scanf("%d",&numero);
        printf("O valor absoluto: %d\n",absoluto(numero));
    }
return 0;
}

int absoluto(int n){
    if (n < 0){
        return n*-1;
    }
    return n;
}