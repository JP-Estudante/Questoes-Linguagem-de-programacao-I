/*Escreva uma fun��o que receba dois n�meros inteiros retorne o menor
n�mero*/
#include <stdio.h>

    int comparar(int n1, int n2);

int main(){
    int num1, num2, resutl;
    printf("Insira o numero: ");
        scanf("%d",&num1);

    printf("Insira outro numero: ");
        scanf("%d",&num2);

    resutl = comparar(num1, num2);
    printf("O menor numero �: %d",resutl);

    return 0;
}
int comparar(int n1, int n2){
    if(n1 > n2){
        return n2;
    }else{
        return n1;
    }
}