/*Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
? Horario: composto de hora, minutos e segundos.
? Data: composto de dia, mês e ano.
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
    
        printf("Data: dia | mês | ano [separados por espaço]: ");
        scanf("%d %d %d", &cp.dia, &cp.mes, &cp.ano);

        printf("Horario: hora | minutos | segundos [separados por espaço]: ");
        scanf("%d %d %d", &cp.hora, &cp.minutos, &cp.segundos);

        fflush(stdin);
        printf("Descreva o compromisso[Máx: 30]: ");
        fgets(cp.descrever, 30, stdin);

            printf("\nData: %02d/%02d/%02d",cp.dia, cp.mes, cp.ano);

            printf("\nHora: %02d:%02d:%02d",cp.hora, cp.minutos, cp.segundos);

            printf("\n\n---Compromisso---\n");
            printf("Descrição: %s",cp.descrever);
}