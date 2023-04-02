/*Escreva um programa que solicite dois n�meros inteiros ao usu�rio e que apresente na
tela como resultado o dobro desses n�meros que devem ser somados e o resultado da
soma devem ser triplicados. Esse programa deve possuir uma fun��o para dobrar
o valor de um n�mero, outra para somar dois n�meros e uma terceira para triplicar um
n�mero.*/

#include<locale.h>
#include<stdio.h>
    int somar(int numeroUm, int numeroDois);
    int somarDobrado(int numeroSomado);
    int triplicar(int numeroSomado);

int main (){
setlocale(LC_ALL,"portuguese");
int numeroUm, numeroDois, numeroUmDobrado, numeroDoisDobrado, resultadoDoDobro, resultadoDoDobroTriplicado, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d",&numeroUm);

    printf("Digite outro numero inteiro: ");
    scanf("%d",&numeroDois);

    
    printf("O dobro de %d = %d\n",numeroUm,somarDobrado(numeroUm));
    printf("O dobro de %d = %d\n",numeroDois,somarDobrado(numeroDois));
    resultado = somar(somarDobrado(numeroUm),somarDobrado(numeroDois));
    printf("%d + %d = %d\n",somarDobrado(numeroUm), somarDobrado(numeroDois), resultado);
    printf("%d x 3 = %d\n",resultado, triplicar(resultado));
}
    int somar(int numeroUm, int numeroDois){
        return (numeroUm + numeroDois);
    }
    int somarDobrado(int numeroSomado){
        return (numeroSomado * 2);
    }
    int triplicar(int numeroSomado){
        return (numeroSomado * 3);
    }