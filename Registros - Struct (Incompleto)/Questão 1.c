/*Escreva um trecho de codigo para fazer a cria��o dos novos tipos de dados conforme solicitado abaixo:
? Horario: composto de hora, minutos e segundos.
? Data: composto de dia, m�s e ano.
? Compromisso: composto de uma data, horario e texto que descreve o compromisso.*/
#include <stdio.h>
#include <locale.h>
    struct Compromisso{
        int hora, minutos, segundos, dia, mes, ano;
        char descrever[30];
    };

int main(){

    setlocale(LC_ALL,"Portuguese");

    struct Compromisso cp;
    int i;
    
        printf("Data: dia | m�s | ano [separados por espa�o]: ");
        scanf("%d %d %d", &cp.dia, &cp.mes, &cp.ano);

        printf("Horario: hora | minutos | segundos [separados por espa�o]: ");
        scanf("%d %d %d", &cp.hora, &cp.minutos, &cp.segundos);

        fflush(stdin);
        printf("Descreva o compromisso[M�x: 30]: ");
        fgets(cp.descrever, 30, stdin);

            printf("\nData: %02d/%02d/%02d",cp.dia, cp.mes, cp.ano);

            printf("\nHora: %02d:%02d:%02d",cp.hora, cp.minutos, cp.segundos);

            printf("\n\n---Compromisso---\n");
            printf("Descri��o: %s",cp.descrever);
}