/*Desenvolva um programa que solicite três notas de provas de um aluno e apresente na
tela a média dessas notas. A obtenção das notas deve ser realizada na função principal
e o cálculo da média das notas deve ser obtido por outra função (MÉDIA). Para o cálculo
da média considere que a primeira prova tem peso 1 e as outras duas provas possuem
peso 2.*/

#include<locale.h>
#include<stdio.h>
    int media(int nota1,int nota2,int nota3);

int main (){
setlocale(LC_ALL,"portuguese");
int nota1, nota2, nota3, resultado;
    printf("Informe a 1ª nota: ");
        scanf("%d",&nota1);
    printf("Informe a 2ª nota: ");
        scanf("%d",&nota2);
    printf("Informe a 3ª nota: ");
        scanf("%d",&nota3);

resultado = media(nota1, nota2, nota3);
    printf("Media das notas: %d",resultado);

}
    int media(int nota1,int nota2,int nota3){
    int resultado = (nota1 * 1) + (nota2 * 2) + (nota3 * 2);
    return resultado/5;
}
