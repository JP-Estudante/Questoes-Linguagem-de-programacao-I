/*Escreva um programa em C que leia 5 valores inteiros e imprima para
cada um o seu correspondente valor absoluto. Para obter o valor absoluto
do número utilize a função Absoluto especificada abaixo 2:
Nome: Absoluto
Descrição: Retorna o valor absoluto do número fornecido.
Entrada: int n
Saída: (int) O respectivo valor absoluto de n.*/
#include <stdio.h>
#include <locale.h>

    int Absoluto(int n); //Retorna o valor absoluto do número fornecido.  
int main(){
    setlocale (LC_ALL,"Portuguese");
        int numeros,count,i = 1;
    for(count = 0; count < 5; count++){

        printf("Digite %dº numero: ",i);
            scanf("%d",&numeros);
        printf("Valor absoluto: %d\n", absoluto(numeros));
    i++;
    }
    return 0;
}
int absoluto(int n){
    if(n < 0){
        return n*-1;
    }
return n;
}
