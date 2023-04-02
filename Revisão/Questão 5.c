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
int VerificarPositivo(int n);
int SomaDivisores(int num);

int main(){
    int numero/*, result*/, i;
    for (i = 0; i < 5; i++){
        printf("Digite um numero: ");
            scanf("%d",&numero); 
    //result = VerificarPositivo(numero);
        printf("somando todos da %d\n",SomaDivisores(numero));
    }
    
    return 0;
}
/*int VerificarPositivo(int n){
    if (n < 0){
        return(printf("Esse numero � negativo\n"));
    }else{
        return n;
    }
}*/

int SomaDivisores(int num){
    int i = 1, soma = 0;
    printf("Seus Divisores: ");

    while (i < num){
        if (num % i == 0){
            soma += i;
            printf("%d, ",i);
        }
        i++;
    }
    return soma;
}