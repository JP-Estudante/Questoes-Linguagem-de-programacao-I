/*Escreva uma função que calcule e retorne a distância entre dois pontos (
x1, y1) e (x2, y2). Todos os números e valores de retorno devem ser do
tipo float.*/
#include <stdio.h>
#include <math.h>
    float distancia(int PontoX1,int PontoY1, int PontoX2, int PontoY2);

int main(){
    int X1, Y1, X2, Y2, resul;
    printf("Digite X1 e Y1 separados por espaço: ");
        scanf("%f %f",&X1 ,&Y1);

    printf("Digite X2 e Y2 separados por espaço: ");
        scanf("%f %f",&X2 ,&Y2);
    
    resul = distancia(X1, Y1, X2, Y2);
    printf("A distancia entre os pontos é: %.2f");

    return 0;
}

    float distancia(int PontoX1,int PontoY1, int PontoX2, int PontoY2){
        float passo1, passo2, passo3, passo4;
            passo1 = (PontoX1 - PontoX2);
            passo2 = (PontoY2 - PontoY1);
            passo3 = ((passo1 * passo1) + (passo2 * passo2));
            passo4 = sqrt(passo3);
            return passo4;
    }