/*Desenvolva um programa que solicite tr�s notas de provas de um aluno e apresente na
tela a m�dia dessas notas. A obten��o das notas deve ser realizada na fun��o principal
e o c�lculo da m�dia das notas deve ser obtido por outra fun��o (M�DIA). Para o c�lculo
da m�dia considere que a primeira prova tem peso 1 e as outras duas provas possuem
peso 2.*/

#include<locale.h>
#include<stdio.h>
    int media(int nota1,int nota2,int nota3);

int main (){
setlocale(LC_ALL,"portuguese");
int nota1, nota2, nota3, resultado;
    printf("Informe a 1� nota: ");
        scanf("%d",&nota1);
    printf("Informe a 2� nota: ");
        scanf("%d",&nota2);
    printf("Informe a 3� nota: ");
        scanf("%d",&nota3);

resultado = media(nota1, nota2, nota3);
    printf("Media das notas: %d",resultado);

}
    int media(int nota1,int nota2,int nota3){
    int resultado = (nota1 * 1) + (nota2 * 2) + (nota3 * 2);
    return resultado/5;
}
