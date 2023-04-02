/*Escreva uma função potencia(base, expoente) que, quando chamada,
retorna base^expoente. Por exemplo, potencia(3, 4) deve retornar 81. Assuma
que expoente é um inteiro maior ou igual a 1. */
#include <stdio.h>
#include <math.h>

int potencia(int base, int expoente);

int main(){
int base, expoente, resposta;
    printf("Digite a base: ");
        scanf("%d",&base);
    
    printf("Digite o expoente: ");
        scanf("%d",&expoente);

resposta = potencia(base, expoente);
    printf("%d elevado a %d = %d",base, expoente, resposta);

}

int potencia(int base, int expoente){
    int baseExpoente;
    baseExpoente = pow(base, expoente);

    return baseExpoente;
}