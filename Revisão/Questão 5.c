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
        return(printf("Esse numero é negativo\n"));
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