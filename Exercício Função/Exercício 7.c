/*Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � par. A
fun��o deve retornar 1 se o n�mero for par e 0 se for �mpar */
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
