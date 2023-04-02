/*Faça uma função que recebe um valor inteiro e verifica se o valor é
positivo, negativo ou zero. A função deve retornar 1 para valores
positivos, -1 para negativos e 0 para o valor 0.*/
#include <stdio.h>

int VerificarSinal(int n);

int main(){
    int num;
    printf("Insira um numero: ");
        scanf("%d",&num);
    printf("Numero: %d",VerificarSinal(num));
}

int VerificarSinal(int n){
    if (n > 0){
        return 1;
    }else if (n < 0){
        return -1;
    }else{
        return 0;
    } 
}