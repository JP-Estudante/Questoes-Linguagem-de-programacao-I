// (Jogos desenvolvidos por Gabriel Berle e Joao Pedro)


#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>
#ifdef _WIN32
#include <sys/time.h>
#else
#include <time.h>
#endif

        int GerarMina(int numeroAleatorio);
        int Jogo1 (int NumeroDigitado);
        int Jogo2 (int NumeroDigitado);


    int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
        int modoDoJogo, numeroAleatorio, NumeroDigitado, EntradaNumeros; //variaveis inteiras locais;
        char tutorial;

        printf("\n                     ___________________________________________________________________________");
        printf("\n                    |                                                                           |");
        printf("\n                    |                               Escolha o Jogo                              |");
        printf("\n                    |             Teclado Minado: 1                  Devorador: 2               |");
        printf("\n                    |___________________________________________________________________________|");
        printf("\n                                                         >>> ");
        scanf("%d",&modoDoJogo);

            if (modoDoJogo == 1 || modoDoJogo == 2){
                //Efeito Para Selecionar o Jogo
            Beep(295, 85);
            Beep(395, 125);
            }

        switch (modoDoJogo){
        case 1: //Teclado Minado

        printf("\n                  _____              _             _         ___  ___ _                    _        ");
        printf("\n                 |_   _|            | |           | |        |  \\/  |(_)                  | |       ");
        printf("\n                   | |    ___   ___ | |  __ _   __| |  ___   | .  . | _  _ __    __ _   __| |  ___ ");
        printf("\n                   | |   / _ \\ / __|| | / _` | / _` | / _ \\  | |\\/| || || '_ \\  / _` | / _` | / _ \\");
        printf("\n                   | |  |  __/| (__ | || (_| || (_| || (_) | | |  | || || | | || (_| || (_| || (_) |");
        printf("\n                   \\_/   \\___| \\___||_| \\__,_| \\__,_| \\___/  \\_|  |_/|_||_| |_| \\__,_| \\__,_| \\___/");

        printf("\n                     ___________________________________________________________________________");
        printf("\n                    |                                                                           |");
        printf("\n                    |                           Deseja ver o tutorial?                          |");
        printf("\n                    |                Não                                     Sim                |");
        printf("\n                    |               [N|n]                                   [S|s]               |");
        printf("\n                    |___________________________________________________________________________|");
        printf("\n                                                         >>> ");
            scanf(" %c",&tutorial);

        if (tutorial == 'S' || tutorial == 's'){ //tutorial
        printf("\n                    Neste jogo você devera usar o teclado                              ____   ____   ____ ");
        printf("\n                    numérico do 0 ao 9 para escapar das bombas e                      ||7 || ||8 || ||9 ||");
        printf("\n                    encontrar todos os espaços não minados,                           ||__|| ||__|| ||__||");
        printf("\n                    você só ira perder quando detonar as 4 minas;                     |/__\\| |/__\\| |/__\\|\n");

        printf("\n                    Pressione as teclas do teclado numérico se                         ____   ____   ____ ");
        printf("\n                    você inserir um numero que seja uma mina                          ||4 || ||5 || ||6 ||");
        printf("\n                    ela ira explodir e voce só podera explodir                        ||__|| ||__|| ||__||");
        printf("\n                    mais 2 minas, sem perder;                                         |/__\\| |/__\\| |/__\\|\n");

        printf("\n                    Caso você não exploda uma mina                                     ____   ____   ____ ");
        printf("\n                    você ganha 166 pontos e quando                                    ||1 || ||2 || ||3 ||");
        printf("\n                    uma mina é ativada você perde                                     ||__|| ||__|| ||__||");
        printf("\n                    -333 pontos;                                                      |/__\\| |/__\\| |/__\\|\n");

        printf("\n                    Se você ativar as 4 minas irá perder                              __________");
        printf("\n                    na hora com a menor pontuação                                    ||  0     ||");
        printf("\n                    possivel, e se não explodir as 6                                 ||________||");
        printf("\n                    ira ganhar com a maior pontuação possivel;                       |/________\\|\n\n                                      ");
            system("\npause\n");

        }
        else if (tutorial == 'N' || tutorial == 'n'){

        }
        printf("%d",Jogo1(NumeroDigitado));
            break;

        case 2://Jogo Devorador

        printf("\n                              _____                                       _              ");
        printf("\n                             |  _  \\                                     | |             ");
        printf("\n                             | | | |  ___ __   __  ___   ____   ____   __| |  ___   ____");
        printf("\n                             | | | | / _ \\\\ \\ /  // _ \\ |  __| / _  | / _  | / _ \\ |  __|");
        printf("\n                             | |/ / |  __/ \\ V / | (_) || |   | (_| || (_| || (_) || |   ");
        printf("\n                             |___/   \\___|  \\_/   \\___/ |_|    \\____| \\____| \\___/ |_| ");

        printf("\n                     ___________________________________________________________________________");
        printf("\n                    |                                                                           |");
        printf("\n                    |                           Deseja ver o tutorial?                          |");
        printf("\n                    |                Não                                     Sim                |");
        printf("\n                    |               [N|n]                                   [S|s]               |");
        printf("\n                    |___________________________________________________________________________|");
        printf("\n                                                         >>> ");
            scanf(" %c",&tutorial);


    if (tutorial == 'S' || tutorial == 's'){ //tutorial

        printf("\n                    Esse jogo funciona com 2 jogadores, onde o 1º                 ____   ____   ____ ");
        printf("\n                    jogador começa inserindo um número, caso ele erre            ||7 || ||8 || ||9 ||");
        printf("\n                    o dente é a vez do 2º jogador, até um dos jogadores          ||__|| ||__|| ||__||");
        printf("\n                    digitar o número errado e ser mordido;                       |/__\\| |/__\\| |/__\\|\n");

        printf("\n                    Se o jogo passar de 5 rodadas, os jogadores terão 2           ____   ____   ____ ");
        printf("\n                    dentes aleatorios toda rodada, e se o jogo passar            ||4 || ||5 || ||6 ||");
        printf("\n                    de 8 rodadas serão gerados 3 dentes aleatorios               ||__|| ||__|| ||__||");
        printf("\n                    toda rodada Obs.(5 rodadas = 10 tentativas seguidas);        |/__\\| |/__\\| |/__\\|\n");

        printf("\n                    Toda vez que um numero é inserido o jogo escolhe outro        ____   ____   ____ ");
        printf("\n                    caso o numero inserido não seja igual ao gerado.             ||1 || ||2 || ||3 ||");
        printf("\n                    Rodada 1 Ex.:(Numero Gerado (4) e Numero inserido (3));      ||__|| ||__|| ||__||");
        printf("\n                    Rodada 2 Ex.:(Numero Gerado (5) e Numero inserido (5)).      |/__\\| |/__\\| |/__\\|\n");

        printf("\n                                                                                  __________");
        printf("\n                                                                                 ||  0     ||");
        printf("\n                                                                                 ||________||");
        printf("\n                                                                                 |/________\\|\n\n                                 ");

            system("\npause");
        }
        else if (tutorial == 'N' || tutorial == 'n'){

        }
        printf("%d",Jogo2
                (NumeroDigitado));
            break;
        }
    }

        int GerarMina(int numeroAleatorio){
        for (numeroAleatorio = 0; numeroAleatorio < 1; numeroAleatorio++){
            return rand() % 10;
        }
    }




    int Jogo1 (int NumeroDigitado){
    int mina1;
    int mina2;
    int mina3;
    int mina4;
    int numeroAleatorio;

    mina1 = GerarMina(numeroAleatorio);

    mina2 = GerarMina(numeroAleatorio);
    if ((mina2 == mina4)||(mina2 == mina3)||(mina2 == mina1)){
    while ((mina2 == mina4)||(mina2 == mina3)||(mina2 == mina1)){
    mina2 = GerarMina(numeroAleatorio);
    }
    }

    mina3 = GerarMina(numeroAleatorio);
    if ((mina3 == mina4)||(mina3 == mina2)||(mina3 == mina1)){
    while ((mina3 == mina4)||(mina3 == mina2)||(mina3 == mina1)){
    mina3 = GerarMina(numeroAleatorio);
    }
    }

    mina4 = GerarMina(numeroAleatorio);
    if ((mina4 == mina3)||(mina4 == mina2)||(mina4 == mina1)){
    while ((mina4 == mina3)||(mina4 == mina2)||(mina4 == mina1)){
    mina4 = GerarMina(numeroAleatorio);
    }
    }
    float pontuacao;
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0, contad = 0;
    int jogada, loop, continuar;
    int tentativas = 10, chances = 4;

            while (tentativas > 0){
    printf("Tabela dos números digitados.\n");
    printf("Jogada[1] = %d\n", num1);
    printf("Jogada[2] = %d\n", num2);
    printf("Jogada[3] = %d\n", num3);
    printf("Jogada[4] = %d\n", num4);
    printf("Jogada[5] = %d\n", num5);
    printf("Jogada[6] = %d\n", num6);
    printf("Jogada[7] = %d\n", num7);
    printf("Jogada[8] = %d\n", num8);
    printf("Jogada[9] = %d\n", num9);
    //printf("Cheat: %d %d %d %d",mina1, mina2, mina3, mina4);
    printf("\nTentativas: %d \n\nFaça sua jogada: ",tentativas);

    scanf ("%d",&jogada);
    system("cls");
    contad ++;

    printf("\n ____ ");
        printf("\n||%d ||",jogada);
        printf("\n||__||");
        printf("\n|/__\\| \n\n");



    if (contad == 1){
        num1 = jogada;
        }

        if (contad == 2){
        num2 = jogada;
        if ((num2 == num1)){
        printf("\nVocê ja digitou esse numero!!!!!!\n");
        scanf ("%d",&jogada);
        num2 = jogada;
        while((num2 == num1)){
             scanf ("%d",&jogada);
             num2 = jogada;
        }
        }
        }

        if (contad == 3){
        num3 = jogada;
         if ((num3 == num1)||(num3 == num2)){
        printf("\nVocê ja digitou esse numero!!!!!!\n");
        scanf ("%d",&jogada);
        num3 = jogada;
        while((num3 == num1)||(num3 == num2)){
             scanf ("%d",&jogada);
             num3 = jogada;
        }
        }
        }

        if (contad == 4){
        num4 = jogada;
          if ((num4 == num2)||(num4 == num3)||(num4 == num1)){
        printf("\nVocê ja digitou esse numero!!!!!!\n");
        scanf ("%d",&jogada);
        num4 = jogada;
        while((num4 == num2)||(num4 == num3)||(num4 == num1)){
             scanf ("%d",&jogada);
             num4 = jogada;
        }
        }
        }

        if (contad == 5){
        num5 = jogada;
          if ((num5 == num2)||(num5 == num3)||(num5 == num4)||(num5 == num1)){
        printf("\nVocê ja digitou esse numero!!!!!!\n");
        scanf ("%d",&jogada);
        num5 = jogada;
        while((num5 == num2)||(num5 == num3)||(num5 == num4)||(num5 == num1)){
             scanf ("%d",&jogada);
             num5 = jogada;
        }
        }
        }

        if (contad == 6){
        num6 = jogada;
          if ((num6 == num2)||(num6 == num3)||(num6 == num4)||(num6 == num5)||(num6 == num1)){
        printf("\nVocê ja digitou esse numero!!!!!!\n");
        scanf ("%d",&jogada);
        num6 = jogada;
        while((num6 == num2)||(num6 == num3)||(num6 == num4)||(num6 == num5)||(num6 == num1)){
             scanf ("%d",&jogada);
             num6 = jogada;
        }
        }
        }

        if (contad == 7){
        num7 = jogada;

          if ((num7 == num2)||(num7 == num3)||(num7 == num4)||(num7 == num5)||(num7 == num6)||(num7 == num1)){
        printf("\nVocê ja digitou esse numero!!!!!!\n");
        scanf ("%d",&jogada);
        num7 = jogada;
        while((num7 == num2)||(num7 == num3)||(num7 == num4)||(num7 == num5)||(num7 == num6)||(num7 == num1)){
             scanf ("%d",&jogada);
             num7 = jogada;
        }
        }
        }

        if (contad == 8){
        num8 = jogada;
          if ((num8 == num2)||(num8 == num3)||(num8 == num4)||(num8 == num5)||(num8 == num6)||(num8 == num7)||(num8 == num1)){
        printf("\nVocê ja digitou esse numero!!!!!!\n");
        scanf ("%d",&jogada);
        num8 = jogada;
        while((num8 == num2)||(num8 == num3)||(num8 == num4)||(num8 == num5)||(num8 == num6)||(num8 == num7)||(num8 == num1)){
             scanf ("%d",&jogada);
             num8 = jogada;
        }
        }
        }

        if (contad == 9){
        num9 = jogada;
          if ((num9 == num2)||(num9 == num3)||(num9 == num4)||(num9 == num5)||(num9 == num6)||(num9 == num7)||(num9 == num8)||(num9 == num1)){
        printf("\nVocê ja digitou esse numero!!!!!!\n");
        scanf ("%d",&jogada);
        num9 = jogada;
        while((num9 == num2)||(num9 == num3)||(num9 == num4)||(num9 == num5)||(num9 == num6)||(num9 == num7)||(num9 == num8)||(num9 == num1)){
             scanf ("%d",&jogada);
             num9 = jogada;
        }
        }
        }

        if (jogada == mina1){
            tentativas--;
            chances--;
            pontuacao = pontuacao-333;
    printf("\n                    ____                                _   _   _ ");
    printf("\n                   |  _ \\                              | | | | | |");
    printf("\n                   | |_) |   ___     ___    _ __ ___   | | | | | |");
    printf("\n                   |  _ <   / _ \\   / _ \\  | '_ ` _ \\  | | | | | |");
    printf("\n                   | |_) | | (_) | | (_) | | | | | | | |_| |_| |_|");
    printf("\n                   |____/   \\___/   \\___/  |_| |_| |_| (_) (_) (_)");
    printf("\n                      Se você errar mais %d vezes você perderá! \n\n",chances);

        }else if (jogada == mina2){
            tentativas--;
            chances--;
            pontuacao = pontuacao-333;
    printf("\n                    ____                                _   _   _ ");
    printf("\n                   |  _ \\                              | | | | | |");
    printf("\n                   | |_) |   ___     ___    _ __ ___   | | | | | |");
    printf("\n                   |  _ <   / _ \\   / _ \\  | '_ ` _ \\  | | | | | |");
    printf("\n                   | |_) | | (_) | | (_) | | | | | | | |_| |_| |_|");
    printf("\n                   |____/   \\___/   \\___/  |_| |_| |_| (_) (_) (_)");
    printf("\n                      Se você errar mais %d vezes você perderá! \n\n",chances);

        } else if (jogada == mina3){
            tentativas--;
            chances--;
            pontuacao = pontuacao-333;
    printf("\n                    ____                                _   _   _ ");
    printf("\n                   |  _ \\                              | | | | | |");
    printf("\n                   | |_) |   ___     ___    _ __ ___   | | | | | |");
    printf("\n                   |  _ <   / _ \\   / _ \\  | '_ ` _ \\  | | | | | |");
    printf("\n                   | |_) | | (_) | | (_) | | | | | | | |_| |_| |_|");
    printf("\n                   |____/   \\___/   \\___/  |_| |_| |_| (_) (_) (_)");
    printf("\n                      Se você errar mais %d vezes você perderá! \n\n",chances);

        } else if (jogada == mina4){
            tentativas--;
            chances--;
            pontuacao = pontuacao-333;
    printf("\n                    ____                                _   _   _ ");
    printf("\n                   |  _ \\                              | | | | | |");
    printf("\n                   | |_) |   ___     ___    _ __ ___   | | | | | |");
    printf("\n                   |  _ <   / _ \\   / _ \\  | '_ ` _ \\  | | | | | |");
    printf("\n                   | |_) | | (_) | | (_) | | | | | | | |_| |_| |_|");
    printf("\n                   |____/   \\___/   \\___/  |_| |_| |_| (_) (_) (_)");
    printf("\n                      Se você errar mais %d vezes você perderá! \n\n",chances);

        }else{


printf("\n                      _    _    __              _   _   _");
printf("\n                     | |  | |  / _|            | | | | | |");
printf("\n                     | |  | |  | |_    ____    | | | | | |");
printf("\n                     | |  | |  |  _|  / _  |   | | | | | |");
printf("\n                     | |__| |  | |   | (_| |   |_| |_| |_|");
printf("\n                     \\______/  |_|    \\____|   (_) (_) (_)");

            tentativas--;
            pontuacao = pontuacao+166.6666666;
            printf("\nScore: %.0f \n",pontuacao);

        }


            if (chances == 0){
                system("cls");
                tentativas = 0;
                    printf("\n                   _______   _______ .______     .______        ______   .___________.     ___       __");
                    printf("\n                  |       \\ |   ____||   _  \\    |   _  \\      /  __  \\  |           |    /   \\     |  | ");
                    printf("\n                  |  .--.  ||  |__   |  |_)  |   |  |_)  |    |  |  |  | `---|  |----`   /  ^  \\    |  | ");
                    printf("\n                  |  |  |  ||   __|  |      /    |      /     |  |  |  |     |  |       /  /_\\  \\   |  | ");
                    printf("\n                  |  '--'  ||  |____ |  |\\  \\-   |  |\\  \\-.   |  `--'  |     |  |      /  _____  \\  |__| ");
                    printf("\n                  |_______/ |_______|| _| `.__|  | _| `.__|    \\______/      |__|     /__/     \\__\\ (__) ");
                    printf("\n                   Seu Score: [%.0f] \n ",pontuacao);

                    //Efeito de Derrota(Explosão)
                Beep (2550, 500);
                Beep (2550, 500);
                Beep (2550, 500);

                    do{
                    Sleep(1000);
                    printf("\n                                                 --");
                    printf("\n                             -_'---  '    -       --_'");
                    printf("\n                          -___                          -'^;-");
                    printf("\n                       __-                                   _--");
                    printf("\n                     -*;                                       -^-");
                    printf("\n                    -;;-                                        ,*_");
                    printf("\n                    S*;^                                     -'_^;;L^");
                    printf("\n                    Or;^--              -___--            --^;;;;;;*8");
                    printf("\n                   :8yc;;;;^_.     -_-_^;;;;;;;;^_-,,- __^;;;;;;;3%%");
                    printf("\n                    v%%!;;;;;;;~^^~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;*g*");
                    printf("\n                    %%g%%hel;;;;;;;;;;;;;;;;;;;;;;;;;;;;*;*U+;rjS0#X3^");
                    printf("\n                    eU%%gg%%Eb82s3Dvt#68FvxetrrHjvJi;;*Gggggg0ggggg3");
                    printf("\n                       #gggggggggggggggggggggggggg%%%%ggggggggggg8b;");
                    printf("\n                        -^r#888gggMM%%ShU#x3PSxF1*Gg##8gggM_;ec");
                    printf("\n                                ;;      _;;;;;;_       --");
                    printf("\n                                        _;;;;;;^");
                    printf("\n                                        _;;;;;;:");
                    printf("\n                                        _;;;;;;_");
                    printf("\n                                        ,^^~;;~_");
                    printf("\n                              _-_-'_-- -_!^_^;_--- -_---");
                    printf("\n                                        yUUdPS3^");
                    printf("\n                                       _;;;;;;;^");
                    printf("\n                                       ^;;;;;;;^");
                    printf("\n                                       ;;;;;;;;;");
                    printf("\n                           __-        _;;;;;;;;;        _:");
                    printf("\n                          _;;;_:___   ^,_,;;;;;^  - -_:;;;;;^__");
                    printf("\n                      ,_^^;;;;;;;;;~^^:^;^_____^^;;;;;;;;;;;!^^_");
                    printf("\n                       TPyEzit1SCTrr;;;;;;;;;;;;;*;riivTcckj8ggg3");
                    Beep(300, 3500);
                    }while(loop = 4);
    }

            if ((tentativas == 4)&&(chances == 4)){
                system("cls");
                tentativas = 0;

                    //Efeito de Vitória
                Beep (1000, 180);
                    Sleep(200);
                Beep (1000, 180);
                Beep (1200, 280);
                    Sleep(200);
                Beep (1200, 280);
                Beep (1400, 600);

                    printf("\n                                                      ___              __  ");
                    printf("\n                                                     /__/             |__|                            ___________                 ");
                    printf("\n                  ____    ____  __  .___________.  ______   .______    __       ___       __        _|!:::::::::!|_");
                    printf("\n                  \\   \\  /   / |  | |           | /  __  \\  |   _  \\  |  |     /   \\     |  |      | |:::::::::::| | ");
                    printf("\n                   \\   \\/   /  |  | `---|  |----`|  |  |  | |  |_)  | |  |    /  ^  \\    |  |      |__\\:::::::::/__|");
                    printf("\n                    \\      /   |  |     |  |     |  |  |  | |      /  |  |   /  /_\\  \\   |  |          \\:::::::/     ");
                    printf("\n                     \\    /    |  |     |  |     |  `--'  | |  |\\  \\-.|  |  /  _____  \\  |__|           /!:::!\\   ");
                    printf("\n                      \\__/     |__|     |__|      \\______/  | _| `.__||__| /__/     \\__\\ (__)          |_______|    ");

                    //Efeito de Vitória
                Beep (1000, 180);
                    Sleep(200);
                Beep (1000, 180);
                Beep (1200, 280);
                    Sleep(200);
                Beep (1200, 280);
                Beep (1400, 600);
                    printf("\n Seu Score: [%.0f] É perfeito\n",pontuacao);
                    do{
                    Sleep(1000);
                    printf("\n                      _______   _______          _______   _______            _______   _______           _______   _______ ");
                    printf("\n                     /  _____| /  _____|        /  _____| /  _____|          /  _____| /  _____|         /  _____| /  _____|");
                    printf("\n                    |  |  __  |  |  __          |  |  __  |  |   __          |  |  __  |  |  __          |  |  __  |  |  __ ");
                    printf("\n                    |  | |_ | |  | |_ |         |  | |_ | |  |  |_ |         |  | |_ | |  | |_ |         |  | |_ | |  | |_ |");
                    printf("\n                    |  |__| | |  |__| |         |  |__| | |  ||__| |         |  |__| | |  |__| |         |  |__| | |  |__| |");
                    printf("\n                     \\______|  \\______|          \\______|  \\_______|          \\______|  \\______|          \\______|  \\______|");

                    }while(loop = 4);
    }
            if ((tentativas == 3)&&(chances == 3)){
                system("cls");
                tentativas = 0;

                    printf("\n                                                        ___              __  ");
                    printf("\n                                                       /__/             |__|                            ___________                 ");
                    printf("\n                    ____    ____  __  .___________.  ______   .______    __       ___       __        _|!:::::::::!|_");
                    printf("\n                    \\   \\  /   / |  | |           | /  __  \\  |   _  \\  |  |     /   \\     |  |      | |:::::::::::| | ");
                    printf("\n                     \\   \\/   /  |  | `---|  |----`|  |  |  | |  |_)  | |  |    /  ^  \\    |  |      |__\\:::::::::/__|");
                    printf("\n                      \\      /   |  |     |  |     |  |  |  | |      /  |  |   /  /_\\  \\   |  |          \\:::::::/     ");
                    printf("\n                       \\    /    |  |     |  |     |  `--'  | |  |\\  \\-.|  |  /  _____  \\  |__|           /!:::!\\   ");
                    printf("\n                        \\__/     |__|     |__|      \\______/  | _| `.__||__| /__/     \\__\\ (__)          |_______|    ");

                    //Efeito de Vitória
                Beep (1000, 180);
                    Sleep(200);
                Beep (1000, 180);
                Beep (1200, 280);
                    Sleep(200);
                Beep (1200, 280);
                Beep (1400, 600);
                    printf("\n Seu Score: [%.0f] É quase Perfeito\n",pontuacao);
}

            if ((tentativas == 2)&&(chances == 2)){
                system("cls");
                tentativas = 0;

                    printf("\n                                                        ___              __  ");
                    printf("\n                                                       /__/             |__|                            ___________                 ");
                    printf("\n                    ____    ____  __  .___________.  ______   .______    __       ___       __        _|!:::::::::!|_");
                    printf("\n                    \\   \\  /   / |  | |           | /  __  \\  |   _  \\  |  |     /   \\     |  |      | |:::::::::::| | ");
                    printf("\n                     \\   \\/   /  |  | `---|  |----`|  |  |  | |  |_)  | |  |    /  ^  \\    |  |      |__\\:::::::::/__|");
                    printf("\n                      \\      /   |  |     |  |     |  |  |  | |      /  |  |   /  /_\\  \\   |  |          \\:::::::/     ");
                    printf("\n                       \\    /    |  |     |  |     |  `--'  | |  |\\  \\-.|  |  /  _____  \\  |__|           /!:::!\\   ");
                    printf("\n                        \\__/     |__|     |__|      \\______/  | _| `.__||__| /__/     \\__\\ (__)          |_______|    ");

                    //Efeito de Vitória
                Beep (1000, 180);
                    Sleep(200);
                Beep (1000, 180);
                Beep (1200, 280);
                    Sleep(200);
                Beep (1200, 280);
                Beep (1400, 600);
                    printf("\n Seu Score: [%.0f] É Okay\n",pontuacao);
    }

            if ((tentativas == 1)&&(chances == 1)){
                system("cls");
                tentativas = 0;

                    printf("\n                                                        ___              __  ");
                    printf("\n                                                       /__/             |__|                            ___________                 ");
                    printf("\n                    ____    ____  __  .___________.  ______   .______    __       ___       __        _|!:::::::::!|_");
                    printf("\n                    \\   \\  /   / |  | |           | /  __  \\  |   _  \\  |  |     /   \\     |  |      | |:::::::::::| | ");
                    printf("\n                     \\   \\/   /  |  | `---|  |----`|  |  |  | |  |_)  | |  |    /  ^  \\    |  |      |__\\:::::::::/__|");
                    printf("\n                      \\      /   |  |     |  |     |  |  |  | |      /  |  |   /  /_\\  \\   |  |          \\:::::::/     ");
                    printf("\n                       \\    /    |  |     |  |     |  `--'  | |  |\\  \\-.|  |  /  _____  \\  |__|           /!:::!\\   ");
                    printf("\n                        \\__/     |__|     |__|      \\______/  | _| `.__||__| /__/     \\__\\ (__)          |_______|    ");

                    //Efeito de Vitória
                Beep (1000, 180);
                    Sleep(200);
                Beep (1000, 180);
                Beep (1200, 280);
                    Sleep(200);
                Beep (1200, 280);
                Beep (1400, 600);
                    printf("\n Seu Score: [%.0f] Tá feio viu\n",pontuacao);
            }
        }
    }

   int Jogo2 (int NumeroDigitado){
int numeroAleatorio, loop;
int DenteAleatorio, DenteAleatorio2, DenteAleatorio3, jogada, controle = 0, contadorjogadas = 1;
char jogador1 [20], jogador2 [20];

printf("Jogadores informem seus nickname.\n");
printf("Player 1 <<< ");
scanf("%s",&jogador1);
printf("\n");
printf("Player 2 <<< ");
scanf("%s",&jogador2);
system("cls");

         while(contadorjogadas != 0){

        DenteAleatorio = GerarMina(numeroAleatorio);

        DenteAleatorio2 = GerarMina(numeroAleatorio);
      if ((DenteAleatorio == DenteAleatorio2)||(DenteAleatorio == DenteAleatorio3)){

      while ((DenteAleatorio2 == DenteAleatorio)||(DenteAleatorio2 == DenteAleatorio3)){
        DenteAleatorio2 = GerarMina(numeroAleatorio);
        }
      }

      DenteAleatorio3 = GerarMina(numeroAleatorio);
      if ((DenteAleatorio3 == DenteAleatorio)||(DenteAleatorio3 == DenteAleatorio2)){
        while ((DenteAleatorio3 == DenteAleatorio2)||(DenteAleatorio3 == DenteAleatorio)){
        DenteAleatorio3 = GerarMina(numeroAleatorio);
        }
      }

        if (controle %2 == 0){
    //printf("Cheat: %d %d %d\n", DenteAleatorio, DenteAleatorio2, DenteAleatorio3);
    printf("Sua vez %s \n",jogador1 );
        Beep(1000, 120);
}else{
    //printf("Cheat: %d %d %d\n", DenteAleatorio, DenteAleatorio2, DenteAleatorio3);
    printf("Sua vez %s \n",jogador2 );
        Beep(1000, 120);
}

     printf("Jogadas: %d \n",contadorjogadas);
     scanf("%d",&jogada);
     system("cls");
     controle++;
     contadorjogadas++;

// Parte que mostra quem perdeu

     if (controle %2 != 0 && jogada == DenteAleatorio){
     system("cls");
        contadorjogadas = 0;
        printf("Você perdeu %s",jogador1);
        do{
        Sleep(1000);

    printf("\n                       _     _                                         _                                       ");
    printf("\n                      /_\\   | |  __ _   ___     _ __    ___   _ _   __| |  ___   _  _    __ __  ___   __   ___ ");
    printf("\n                     / _ \\  | | / _` | / _ \\   | '  \\  / _ \\ | '_| / _` | / -_) | || |   \\ V / / _ \\ / _| / -_)");
    printf("\n                    /_/ \\_\\ |_| \\__, | \\___/   |_|_|_| \\___/ |_|   \\__,_| \\___|  \\_,_|    \\_/  \\___/ \\__| \\___|");
    printf("\n                                |___/");
 }while(loop = 4);

 }else if (controle %2 == 0 && jogada == DenteAleatorio){
      system("cls");
        contadorjogadas = 0;
        printf("Você perdeu %s",jogador2);
   do{
        Sleep(1000);

    printf("\n                     _     _                                         _                                       ");
    printf("\n                    /_\\   | |  __ _   ___     _ __    ___   _ _   __| |  ___   _  _    __ __  ___   __   ___ ");
    printf("\n                   / _ \\  | | / _` | / _ \\   | '  \\  / _ \\ | '_| / _` | / -_) | || |   \\ V / / _ \\ / _| / -_)");
    printf("\n                  /_/ \\_\\ |_| \\__, | \\___/   |_|_|_| \\___/ |_|   \\__,_| \\___|  \\_,_|    \\_/  \\___/ \\__| \\___|");
    printf("\n                              |___/");
 }while(loop = 4);

 }else if (controle %2 == 0 && ((jogada == DenteAleatorio)||(jogada == DenteAleatorio2)) && ((contadorjogadas > 10) && (contadorjogadas < 16))){
      system("cls");
        contadorjogadas = 0;
        printf("Você perdeu %s",jogador2);
    do{
        Sleep(1000);

    printf("\n                     _     _                                         _                                       ");
    printf("\n                    /_\\   | |  __ _   ___     _ __    ___   _ _   __| |  ___   _  _    __ __  ___   __   ___ ");
    printf("\n                   / _ \\  | | / _` | / _ \\   | '  \\  / _ \\ | '_| / _` | / -_) | || |   \\ V / / _ \\ / _| / -_)");
    printf("\n                  /_/ \\_\\ |_| \\__, | \\___/   |_|_|_| \\___/ |_|   \\__,_| \\___|  \\_,_|    \\_/  \\___/ \\__| \\___|");
    printf("\n                              |___/");
 }while(loop = 4);


 }else if (controle %2 == 0 && ((jogada == DenteAleatorio)||(jogada == DenteAleatorio2)||(jogada == DenteAleatorio3)) && contadorjogadas >= 17){
      system("cls");
        contadorjogadas = 0;
        printf("Você perdeu %s",jogador2);
        do{
        Sleep(1000);

    printf("\n                     _     _                                         _                                       ");
    printf("\n                    /_\\   | |  __ _   ___     _ __    ___   _ _   __| |  ___   _  _    __ __  ___   __   ___ ");
    printf("\n                   / _ \\  | | / _` | / _ \\   | '  \\  / _ \\ | '_| / _` | / -_) | || |   \\ V / / _ \\ / _| / -_)");
    printf("\n                  /_/ \\_\\ |_| \\__, | \\___/   |_|_|_| \\___/ |_|   \\__,_| \\___|  \\_,_|    \\_/  \\___/ \\__| \\___|");
    printf("\n                              |___/");
 }while(loop = 4);

 }else if (controle %2 != 0 && ((jogada == DenteAleatorio)||(jogada == DenteAleatorio2)) && ((contadorjogadas > 10) && (contadorjogadas < 16))){
      system("cls");
        contadorjogadas = 0;
        printf("Você perdeu %s",jogador1);
  do{
        Sleep(1000);

    printf("\n                     _     _                                         _                                       ");
    printf("\n                    /_\\   | |  __ _   ___     _ __    ___   _ _   __| |  ___   _  _    __ __  ___   __   ___ ");
    printf("\n                   / _ \\  | | / _` | / _ \\   | '  \\  / _ \\ | '_| / _` | / -_) | || |   \\ V / / _ \\ / _| / -_)");
    printf("\n                  /_/ \\_\\ |_| \\__, | \\___/   |_|_|_| \\___/ |_|   \\__,_| \\___|  \\_,_|    \\_/  \\___/ \\__| \\___|");
    printf("\n                              |___/");
 }while(loop = 4);


 }else if (controle %2 != 0 && ((jogada == DenteAleatorio)||(jogada == DenteAleatorio2)||(jogada == DenteAleatorio3)) && contadorjogadas >= 17){
     system("cls");
        contadorjogadas = 0;
    printf("Você perdeu %s",jogador1);
  do{
        Sleep(1000);

    printf("\n                     _     _                                         _                                       ");
    printf("\n                    /_\\   | |  __ _   ___     _ __    ___   _ _   __| |  ___   _  _    __ __  ___   __   ___ ");
    printf("\n                   / _ \\  | | / _` | / _ \\   | '  \\  / _ \\ | '_| / _` | / -_) | || |   \\ V / / _ \\ / _| / -_)");
    printf("\n                  /_/ \\_\\ |_| \\__, | \\___/   |_|_|_| \\___/ |_|   \\__,_| \\___|  \\_,_|    \\_/  \\___/ \\__| \\___|");
    printf("\n                              |___/");
 }while(loop = 4);

        }
    }
}
