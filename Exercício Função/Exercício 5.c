/*Escreva um programa que leia 5 números inteiros positivos (utilize uma
função que leia esse número e verifique se ele é positivo). Para cada
número informado escrever a soma de seus divisores (exceto ele mesmo).
Utilize a função SomaDivisores para obter a soma.
Nome: SomaDivisores
Descrição: Calcula a soma dos divisores do número informado (exceto
ele mesmo).
Entrada: Um número inteiro e positivo.
Saída: A soma dos divisores.
Exemplo: Para o valor 8: 1+2+4 = 7*/
#include <stdio.h>
#include <locale.h>
int SomaDivisores(int numero);

int main(){
setlocale(LC_ALL,"Portuguese");
 int numero, i;

 for(i = 0; i < 5; i++){
 printf("digite o %d número: ", i+1);
 scanf("%d", &numero);
 printf("\n\tSoma dos divisores: %d\n", SomaDivisores(numero));
 }
 return 0;
}
int SomaDivisores(int n){
 int i = 1, soma = 0;
 printf("\tdivisores de %d: ", n);
 while( i < n ){ // Laço de repetição que vai de 1 até o valor de N
 if (n % i == 0){ // O número N é divisível por i.
 soma += i; // Soma os divisores
 printf("%d, ", i );
 }
 i++;
 }

 return soma;
}