/*Desenvolva um programa para calcular e comparar a área de dois retângulos A e B, o
programa deverá dizer qual retângulo possui a maior área ou se eles possuem tamanhos
iguais. Esse programa deve possuir uma função para calcular a área do retângulo. Dados
de entrada: tamanho da base e da altura (tipo das variáveis: inteiro, valor em
centímetros).*/
#include<locale.h>
#include<stdio.h>
    int areaRetangulo(int base, int altura);

int main (){
setlocale(LC_ALL,"portuguese");
    int base, altura, area1, area2 ,resultado;

        printf("Insira a base do 1º triangulo[cm]: ");
            scanf("%d",&base);
        printf("Insira a altura do 1º triangulo[cm]: ");
            scanf("%d",&altura);
                area1 = areaRetangulo(base, altura);
        printf("Insira a base do 2º triangulo[cm]: ");
            scanf("%d",&base);
        printf("Insira a altura do 2º triangulo[cm]: ");
            scanf("%d",&altura);
                area2 = areaRetangulo(base, altura);

    printf("Area do 1º retangulo: %d\n",area1);
    printf("Area do 2º retangulo: %d\n",area2);

    if (area1 > area2){
        printf("1º triangulo tem a maior área");
    }
    else
    if (area2 > area1){
        printf("2º triangulo tem a maior área");        
    }
    else if (area1 == area2){
        printf("Áreas Iguais");
    }
}
    int areaRetangulo(int base, int altura){
        return (base*altura);
    }