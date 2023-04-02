/*Escreva uma função potencia(base, expoente) que, quando chamada,
retorna base^expoente. Por exemplo, potencia(3, 4) deve retornar 81. Assuma
que expoente é um inteiro maior ou igual a 1.*/
#include <stdio.h>
int potencia(int base, int expoente);

int main(){
    int b, e, resul;
    printf("Insira a base: ");
        scanf("%d",&b);

    printf("Insira o expoente: ");
        scanf("%d",&e);

    resul = potencia(b, e);
    printf("O %d elevado a %d = %d",b,e,resul);

    return 0;
}

potencia(int base, int expoente){
    int i, exp = 1;
    for (i = 0; i < expoente; i++){
       exp *= base;
    }
    return exp;
}
