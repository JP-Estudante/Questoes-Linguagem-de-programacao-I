/*Escreva uma função que calcule e retorne a distância entre dois pontos (
x1, y1) e (x2, y2). Todos os números e valores de retorno devem ser do
tipo float.*/
#include <stdio.h>
#include <math.h>

float calculaDistancia (float Px1, float Px2, float Py1, float Py2);

int main(){
float x1, x2, y1, y2, resultado;
printf("Digite as cordenadas X e Y do ponto 1:\n");
scanf("%f %f",&x1,&y1);

printf("Digite as cordenadas X e Y do ponto 2:\n");
scanf("%f %f",&x2,&y2);

resultado = calculaDistancia(x1, x2, y1, y2);
printf("A distancia entre os pontos e: %f\n",resultado);

return 0;
}
float calculaDistancia (float Px1, float Px2, float Py1, float Py2){
    float a, b, c, d;
    a = Px1 - Px2;
    b = Py1 - Px2;
    c = a * a + b * b;
    d = sqrt(c);
    return d;
}