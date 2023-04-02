/*Escreva um programa que leia 5 n�meros inteiros positivos (utilize uma
fun��o que leia esse n�mero e verifique se ele � positivo). Para cada
n�mero informado escrever a soma de seus divisores (exceto ele mesmo).
Utilize a fun��o SomaDivisores para obter a soma.
Nome: SomaDivisores
Descri��o: Calcula a soma dos divisores do n�mero informado (exceto
ele mesmo).
Entrada: Um n�mero inteiro e positivo.
Sa�da: A soma dos divisores.
Exemplo: Para o valor 8: 1+2+4 = 7*/
#include <stdio.h>
#include <locale.h>
int SomaDivisores(int numero);

int main(){
setlocale(LC_ALL,"Portuguese");
 int numero, i;

 for(i = 0; i < 5; i++){
 printf("digite o %d n�mero: ", i+1);
 scanf("%d", &numero);
 printf("\n\tSoma dos divisores: %d\n", SomaDivisores(numero));
 }
 return 0;
}
int SomaDivisores(int n){
 int i = 1, soma = 0;
 printf("\tdivisores de %d: ", n);
 while( i < n ){ // La�o de repeti��o que vai de 1 at� o valor de N
 if (n % i == 0){ // O n�mero N � divis�vel por i.
 soma += i; // Soma os divisores
 printf("%d, ", i );
 }
 i++;
 }

 return soma;
}