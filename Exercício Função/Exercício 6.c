/*Escreva uma fun��o que receba 3 notas de um aluno e uma letra. Se a
letra for A a fun��o retorna a m�dia aritm�tica das notas do aluno, se for
P, a sua m�dia ponderada (pesos: 5, 3 e 2) e se for H, a sua m�dia
harm�nica.*/
#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

float Medias(float nota1, float nota2, float nota3, char opcao);

int main(){
float Medias(float nota1, float nota2, float nota3, char opcao);
    float calcule,nota1,nota2,nota3;
    char opcao; 
setlocale(LC_ALL,"Portuguese");
    printf("|Informe as 3 notas|\n");
    printf("|E uma das 3 m�dias|\n");
    printf("|A- para aritm�tica|\n");
    printf("|P - para ponderada|\n"); 
    printf("|H - para harm�nica|\n");  
    printf("|***Ex.: 1 2 3 A***|\n");
    scanf("%f %f %f %c",&nota1, &nota2, &nota3, &opcao);

    calcule = Medias(nota1, nota2, nota3, opcao);

    printf("Resultado = %0.3f",calcule);

    return 0;      
}

float Medias(float nota1, float nota2, float nota3, char opcao){
    if (opcao == 'A') {
        return (nota1 + nota2 + nota3) / 3;
    } else if (opcao == 'P') {
        return (nota1*5 + nota2*3 + nota3*2) / 10;
    } else if (opcao == 'H'){
            return (3/(1/nota1 + 1/nota2 + 1/nota3));
    }
}