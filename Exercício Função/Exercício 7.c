/*Faça uma função que recebe um valor inteiro e verifica se o valor é par. A
função deve retornar 1 se o número for par e 0 se for ímpar */
#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int ParImpar(int numero);

int main(){
setlocale(LC_ALL,"Portuguese");
int resultado, numero;
    printf("Digite o numero: ");
        scanf("%d",&numero);

    printf("%d", resultado = ParImpar(numero));

}
int ParImpar(int numero){
    if (numero %2 == 0){
        return 1;
    }else{
        return 0;
    }
}
