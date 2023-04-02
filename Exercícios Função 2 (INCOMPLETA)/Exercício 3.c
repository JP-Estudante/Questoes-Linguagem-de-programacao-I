/*Escreva um programa que solicite a temperatura em Celsius ao usuário e apresente na
tela o resultado da conversão dessa temperatura em Fahrenheit. Esse programa deve
possuir uma função para converter a temperatura. Dados: Fahrenheit = Celsius x 1,8 +
32.*/
#include<locale.h>
#include<stdio.h>
    int conversor(int celsius);

int main (){
setlocale(LC_ALL,"portuguese");
int celsius, fahrenheit;
    printf("Temperatura em Celsius: ");
        scanf("%d",&celsius);

    fahrenheit = conversor(celsius);
        printf("Temperatura: %d °F",fahrenheit);
}
    int conversor(int celsius){
    int fahrenheit;
        fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
    }