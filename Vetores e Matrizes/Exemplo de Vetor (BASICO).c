
#include <stdio.h>
#include <time.h>
#define TAM 10
int main(){
    int i;
    float vet[TAM];
    srand(time(NULL));
    for (i=0; i<TAM; i++){
        vet[i] = rand()%10;
    }
    for (i=0;i<TAM;i++){
        printf("%0.f\n",vet[i]);
    }
printf("\n");
}
