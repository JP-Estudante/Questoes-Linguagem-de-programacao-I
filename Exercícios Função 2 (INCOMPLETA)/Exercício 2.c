/*Desenvolva um programa para calcular e comparar a �rea de dois ret�ngulos A e B, o
programa dever� dizer qual ret�ngulo possui a maior �rea ou se eles possuem tamanhos
iguais. Esse programa deve possuir uma fun��o para calcular a �rea do ret�ngulo. Dados
de entrada: tamanho da base e da altura (tipo das vari�veis: inteiro, valor em
cent�metros).*/
#include<locale.h>
#include<stdio.h>
    int areaRetangulo(int base, int altura);

int main (){
setlocale(LC_ALL,"portuguese");
    int base, altura, area1, area2 ,resultado;

        printf("Insira a base do 1� triangulo[cm]: ");
            scanf("%d",&base);
        printf("Insira a altura do 1� triangulo[cm]: ");
            scanf("%d",&altura);
                area1 = areaRetangulo(base, altura);
        printf("Insira a base do 2� triangulo[cm]: ");
            scanf("%d",&base);
        printf("Insira a altura do 2� triangulo[cm]: ");
            scanf("%d",&altura);
                area2 = areaRetangulo(base, altura);

    printf("Area do 1� retangulo: %d\n",area1);
    printf("Area do 2� retangulo: %d\n",area2);

    if (area1 > area2){
        printf("1� triangulo tem a maior �rea");
    }
    else
    if (area2 > area1){
        printf("2� triangulo tem a maior �rea");        
    }
    else if (area1 == area2){
        printf("�reas Iguais");
    }
}
    int areaRetangulo(int base, int altura){
        return (base*altura);
    }