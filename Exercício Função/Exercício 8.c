/*Faça uma função que recebe um valor inteiro e verifica se o valor é
positivo, negativo ou zero. A função deve retornar 1 para valores
positivos, -1 para negativos e 0 para o valor 0.*/
#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int verificar(int numero);

int main(){
setlocale(LC_ALL,"Portuguese");
    int numero,resultado,i;
    for (i = 0; i <= 5; i++){ 
    printf("Digite:\t");
        scanf("%d",&numero);
    
    printf("%d\n",resultado = verificar(numero));
    i++;
}
}
int verificar(int numero){
    if (numero > 0){
        return 1;
    } else if (numero == 0){
        return 0;
    } 
    else{
        return -1;
  }
}