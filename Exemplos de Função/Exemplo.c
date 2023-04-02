#include<stdio.h>
int soma(int numero1, int numero2);

int main(){
    int numero1, numero2, resultado;
printf("Digite um numero: ");
scanf("%d",&numero1);

printf("Digite outro numero: ");
scanf("%d",&numero2);

resultado = soma(numero1, numero2);

printf("A soma dos numeros e %d\n",resultado);
}

int soma (int numero1, int numero2){
    int resultado;
    resultado = numero1 + numero2;

return resultado;
}