/*Escreva um programa em C que leia 5 valores inteiros e imprima para
cada um o seu correspondente valor absoluto. Para obter o valor absoluto
do n�mero utilize a fun��o Absoluto especificada abaixo 2:
Nome: Absoluto
Descri��o: Retorna o valor absoluto do n�mero fornecido.
Entrada: int n
Sa�da: (int) O respectivo valor absoluto de n.*/
#include <stdio.h>
#include <locale.h>

    int Absoluto(int n); //Retorna o valor absoluto do n�mero fornecido.  
int main(){
    setlocale (LC_ALL,"Portuguese");
        int numeros,count,i = 1;
    for(count = 0; count < 5; count++){

        printf("Digite %d� numero: ",i);
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
