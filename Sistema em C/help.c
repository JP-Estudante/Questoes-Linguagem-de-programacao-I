#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

int menu();
int cadastro();
int destino();
int classe();
int pagamento();
int comparar();
int relatorio();
int codReserva();
int valor, numeroCartao, CVV;
int count = 0, somaDigito = 0, resposta;
int pais = 0, sentido, situacao = 0, indice = 0;
char cod = 0;
float passagem, finalPassagem, parcela;

struct CadastroUsuario{
  char nome[40];
  int cpf, telefone;
};

int main(){
  setlocale(LC_ALL, "Portuguese");
  menu();
}

int menu(){
  int num;
  printf("1 - Cadastro de passagem\n");
  printf("2 - Classe e pagamento\n");
  printf("3 - Hist�rico de passagens\n");

  printf("\n");
  printf("Digite um numero para op��o\n");
  Sleep(500);
  printf("> ");
  scanf("%d", &num);
  system("cls");

  switch (num){
  case 1:
    printf("op��o 1 - Cadastro de passagem\n");
    Sleep(1000);
    system("cls");
    cadastro();
    break;

  case 2:
    printf("op��o 2 - Classe e pagamento\n");
    Sleep(1000);
    system("cls");
    codReserva();
    break;

  case 3:
    printf("op��o 3 - Hist�rico de passagens\n");
    Sleep(1000);
    system("cls");
    historico();
    break;

  default:
    printf("nenhuma op��o \n");

    break;
  }
}

int cadastro(){
  char resposta;
    struct CadastroUsuario usuario[count];
  
  if (pais == 1 || pais == 2 || pais == 3){
    
    printf("\nVoc� j� possui um pedido pendente para cancela-lo\nv� at� a op��o [3 - Hist�rico de passagens]");
    printf("\n\n[1] - Voltar ao menu\n");
    printf("[2] - Fechar o sistema\n");
    printf("> ");
    scanf("%d",&resposta);
    if (resposta == 2){
    exit(0);
    }else{
      system("cls");
      menu();
    }
  }
  else
    printf("Crie sua passagem\n");

    printf("Nome: ");
    fflush(stdin);
    gets(usuario[count].nome);

    printf("Telefone: ");
    scanf("%d", &usuario[count].telefone);
    fflush(stdin);    

    printf("CPF: ");
    scanf("%d", &usuario[count].cpf);
    fflush(stdin);
    Sleep(500);
    destino();

    count++;
    situacao = 1;
    valor = 1;

    system("cls");
    printf("Retornando ao menu.");
    Sleep(500);
    Sleep(0);
    system("cls");
    printf("Retornando ao menu..");
    Sleep(500);
    Sleep(0);
    system("cls");
    printf("Retornando ao menu...");//fru fru
    Sleep(500);
    Sleep(0);
    system("cls");

    printf("Retornando ao menu.");
    Sleep(500);
    Sleep(0);
    system("cls");
    printf("Retornando ao menu..");
    Sleep(500);
    Sleep(0);
    system("cls");
    printf("Retornando ao menu...");//fru fru
    Sleep(500);
    Sleep(0);
    system("cls");
    menu();
}

int destino(){

  printf("\nDigite o pa�s de destino: \n");
  Sleep(1000);

  printf("1 - Brasil - Londres/Reino Unido \n");
  printf("2 - Brasil - Madrid/Espanha \n");
  printf("3 - Brasil - Lisboa/Portugal \n");
  printf("> ");
  scanf("%d", &pais);
  
  Sleep(1000);
  printf("\n1 - Passagem de ida e volta \n");
  printf("2 - Passagem de ida \n");
  printf("3 - Passagem de volta \n");
  printf("> ");
  scanf("%d", &sentido);

  switch (pais){
  case 1:
    if (sentido == 1){
      passagem = 950.75 * 2;
      system("cls");
      printf("\nATEN��O: O c�digo abaixo � essencial para concluir sua compra;\n");
      printf("O c�digo de reserva desta passagem � vis�vel em [3 - Hist�rico de passagens]\n");
      printf("Codigo de reserva #UKIV \n");
      system("pause");
      cod = 1;
    }
    else if (sentido == 2){
      passagem = 950.75 * 1.7;
      system("cls");
      printf("\nATEN��O: O c�digo abaixo � essencial para concluir sua compra;\n");
      printf("O c�digo de reserva desta passagem � vis�vel em [3 - Hist�rico de passagens]\n");
      printf("Codigo de reserva #UKI \n");
      system("pause");
      cod = 2;
    }
    else if (sentido == 3){
      passagem = 950.75 * 1.5;
      system("cls");
      printf("\nATEN��O: O c�digo abaixo � essencial para concluir sua compra;\n");
      printf("O c�digo de reserva desta passagem � vis�vel em [3 - Hist�rico de passagens]\n");
      printf("Codigo de reserva #UKV \n");
      system("pause");
      cod = 3;
    }
    else{
      printf("Op��o inv�lida \n");
      Sleep(1000);
      printf("Retornando ao menu.");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu..");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu...");//fru fru
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");

      printf("Retornando ao menu.");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu..");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu...");//fru fru
      Sleep(500);
      Sleep(0);
      system("cls");
      menu();
    }

    break;
  case 2:
    if (sentido == 1){
      passagem = 735.55 * 2;
      system("cls");
      printf("\nATEN��O: O c�digo abaixo � essencial para concluir sua compra;\n");
      printf("O c�digo de reserva desta passagem � vis�vel em [3 - Hist�rico de passagens]\n");
      printf("\nCodigo de reserva #SPIV \n");
      system("pause");
      cod = 4;
    }
    else if (sentido == 2){
      passagem = 735.55 * 1.7;
      system("cls");
      printf("\nATEN��O: O c�digo abaixo � essencial para concluir sua compra;\n");
      printf("O c�digo de reserva desta passagem � vis�vel em [3 - Hist�rico de passagens]\n");
      printf("\nCodigo de reserva #SPI \n");
      system("pause");
      cod = 5;
    }
    else if (sentido == 3){
      passagem = 735.55 * 1.5;
      system("cls");
      printf("\nATEN��O: O c�digo abaixo � essencial para concluir sua compra;\n");
      printf("O c�digo de reserva desta passagem � vis�vel em [3 - Hist�rico de passagens]\n");
      printf("\nCodigo de reserva #SPV \n");
      system("pause");
      cod = 6;
    }
    else if(sentido != 1 || sentido != 2 || sentido != 3){
      printf("Op��o inv�lida \n");
      Sleep(1000);
      printf("Retornando ao menu.");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu..");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu...");//fru fru
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");

      printf("Retornando ao menu.");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu..");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu...");//fru fru
      Sleep(500);
      Sleep(0);
      system("cls");
      menu();
      }

    break;
  case 3:
    if (sentido == 1){
      passagem = 020.52 * 2;
      system("cls");
      printf("\nATEN��O: O c�digo abaixo � essencial para concluir sua compra;\n");
      printf("O c�digo de reserva desta passagem � vis�vel em [3 - Hist�rico de passagens]\n");
      printf("\nCodigo de reserva #POIV \n");
      system("pause");
      cod = 7;
    }
    else if (sentido == 2){
      passagem = 020.52 * 1.7;
      system("cls");
      printf("\nATEN��O: O c�digo abaixo � essencial para concluir sua compra;\n");
      printf("O c�digo de reserva desta passagem � vis�vel em [3 - Hist�rico de passagens]\n");
      printf("\nCodigo de reserva #POI \n");
      system("pause");
      cod = 8;
    }
    else if (sentido == 3){
      passagem = 020.52 * 1.5;
      system("cls");
      printf("\nATEN��O: O c�digo abaixo � essencial para concluir sua compra;\n");
      printf("O c�digo de reserva desta passagem � vis�vel em [3 - Hist�rico de passagens]\n");
      printf("\nCodigo de reserva #POV \n");
      system("pause");
      cod = 9;
    }
    else if(sentido != 1 || sentido != 2 || sentido != 3){
      printf("Op��o inv�lida \n");
      Sleep(1000);
      printf("Retornando ao menu.");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu..");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu...");//fru fru
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");

      printf("Retornando ao menu.");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu..");
      Sleep(500);
      Sleep(0);
      system("cls");
      printf("Op��o inv�lida \n");
      printf("Retornando ao menu...");//fru fru
      Sleep(500);
      Sleep(0);
      system("cls");
      menu();
    }

    break;
  default:
    printf("Op��o inv�lida \n");
    Sleep(1000);
    printf("Retornando ao menu.");
    Sleep(500);
    Sleep(0);
    system("cls");
    printf("Op��o inv�lida \n");
    printf("Retornando ao menu..");
    Sleep(500);
    Sleep(0);
    system("cls");
    printf("Op��o inv�lida \n");
    printf("Retornando ao menu...");//fru fru
    Sleep(500);
    Sleep(0);
    system("cls");
    printf("Op��o inv�lida \n");

    printf("Retornando ao menu.");
    Sleep(500);
    Sleep(0);
    system("cls");
    printf("Op��o inv�lida \n");
    printf("Retornando ao menu..");
    Sleep(500);
    Sleep(0);
    system("cls");
    printf("Op��o inv�lida \n");
    printf("Retornando ao menu...");//fru fru
    Sleep(500);
    Sleep(0);
    system("cls");
    menu();
    break;
  }
}

int classe()
{
  int divisao;
  printf("\nEscolha sua classe\n");
  printf("1 - Primeira classe \n");
  printf("2 - Executiva ou business \n");
  printf("3 - Economica \n");
  printf("> ");
  scanf("%d", &divisao);

  switch (divisao)
  {
  case 1:
    passagem = passagem + 750;
    printf("valor da passagem %.2f \n", passagem);
    Sleep(2500);
    system("cls");
    pagamento();
    break;
  case 2:
    passagem = passagem + 500;
    printf("valor da passagem %.2f \n", passagem);
    Sleep(2500);
    system("cls");
    pagamento();
    break;
  case 3:
    passagem = passagem + 250;
    printf("valor da passagem %.2f \n", passagem);
    Sleep(2500);
    system("cls");
    pagamento();
    break;
  default:
    printf("Escolha invalida, retornando \n");
    destino();
  }
}

int pagamento(){
  int pagarCartao, i, pagar;
  printf("\nValor Atual: %.2f\n\n",passagem);
  printf("Metodos de pagamento\n");
  printf("1 - Cart�o de Credito\n");
  printf("2 - Boleto [-15%%]\n");
  printf("3 - (TED) Transfer�ncia Eletr�nica [-15%%]\n");
  printf("> ");
  scanf("%d", &pagar);

  if (pagar == 1){
    system("cls");
    infoCartao();

    if (somaDigito != 3){
      printf("CVV inv�lido\nDeve conter 3 d�gitos\n");
      system("\npause");
      infoCartao();
    }else

    printf("\nValor Atual: %.2f\n\n",passagem);

    printf("Selecione a forma de pagamento\n");
    printf("1 - Debito [-10%%]\n");
    printf("2 - Credito � vista [-5%%]\n");
    printf("3 - Credito parcelado [At� 3x Sem Juros]\n");
    printf("> ");
    scanf("%d", &pagarCartao);

    if (pagarCartao == 1){
      system("cls");
      finalPassagem = passagem - ((10 * passagem) / 100);
      printf("%.2f - 10%%", passagem);
      printf("\nVALOR PAGO: %.2f\n",finalPassagem);
      printf("Agora e s� aguardar o pagamento ser autorizado");
      situacao = 2; //metodo de pagamento debito
      indice++; //n� de pedido

      printf("\n\n[1] - Voltar ao menu\n");
      printf("[2] - Fechar o sistema\n");
      printf("> ");
      scanf("%d",&resposta);
      if (resposta == 2){
      exit(0);
      }else{
        system("cls");
        menu();
      }
    }

    if (pagarCartao == 2){
      system("cls");
      finalPassagem = passagem - ((5 * passagem) / 100);
      printf("%.2f - 5%%", passagem);
      printf("\nVALOR PAGO: %.2f\n",finalPassagem);
      printf("Agora e s� aguardar o pagamento ser autorizado");
      situacao = 3; //metodo de pagamento credito � vista
      indice++; //n� de pedido

      printf("\n\n[1] - Voltar ao menu\n");
      printf("[2] - Fechar o sistema\n");
      printf("> ");
      scanf("%d",&resposta);
      if (resposta == 2){
      exit(0);
      }else{
        system("cls");
        menu();
      }
    }

    if (pagarCartao == 3){
      system("cls");
      printf("\nValor Atual: %.2f\n",passagem);
      printf("Selecione o numero de parcelas\n");
      printf("M�ximo de 3x Sem juros\n");
      printf("> ");
      scanf("%f",&parcela);
      if (parcela <= 3){
          passagem /= parcela;
          finalPassagem = passagem*parcela;
          printf("\n%.2f em %.0fx",passagem,parcela);
          printf("\nVALOR TOTAL: %.2f\n",finalPassagem);
      situacao = 4; //metodo de pagamento parcelado
      indice++; //n� de pedido

        }else if(parcela != 1 || parcela != 2 || parcela != 3){
            printf("N�mero de parcelas inexistente");
            system("pause");
            system("cls");
            pagamento();
        }
    printf("\n\n[1] - Voltar ao menu\n");
    printf("[2] - Fechar o sistema\n");
    printf("> ");
    scanf("%d",&resposta);
    if (resposta == 2){
    exit(0);
    }else{
      system("cls");
      menu();
    }
    }
  }

  if (pagar == 2){
    system("cls");

    printf("Use o c�digo de barras abaixo para o pagamento;");
    finalPassagem = passagem - ((15 * passagem) / 100);
    printf("\nVALOR FINAL: %.2f\n",finalPassagem);

    printf("\nBoleto Gerado:\n");
    printf("\n| || | ||| |||| | || ||| | | || | ||||| ||| ||| || | ||| | || ||| || ||||| ||| ||| |||| |||| ||| ||");
    printf("\n| || | ||| |||| | || ||| | | || | ||||| ||| ||| || | ||| | || ||| || ||||| ||| ||| |||| |||| ||| ||");
    printf("\n| || | ||| |||| | || ||| | | || | ||||| ||| ||| || | ||| | || ||| || ||||| ||| ||| |||| |||| ||| ||");
    printf("\n                      81690000000-0 75001609202-5 30110000010-0 00016074200-3");
    situacao = 5; //metodo de pagamento boleto
    indice++; //n� de pedido

    printf("\n\n[1] - Voltar ao menu\n");
    printf("[2] - Fechar o sistema\n");
    printf("> ");
    scanf("%d",&resposta);
    if (resposta == 2){
    exit(0);
    }else{
      system("cls");
      menu();
    }
  }

  if (pagar == 3){
    system("cls");
    finalPassagem = passagem - ((15 * passagem) / 100);

    printf("Para fazer um TED v� at� o TAA mais proximo\nOu fa�a a transfer�ncia pelo aplicativo do seu banco: ");
    printf("\n\nVALOR FINAL: %.2f\n",finalPassagem);
    printf("\nAg�ncia: 0677-7");
    printf("\nConta: 19.620-7");
    situacao = 6; //metodo de pagamento TED
    indice++; //n� de pedido
    
    printf("\n\n[1] - Voltar ao menu\n");
    printf("[2] - Fechar o sistema\n");
    printf("> ");
    scanf("%d",&resposta);
    if (resposta == 2){
    exit(0);
    }else{
      system("cls");
      menu();
    }
  }
}

int codReserva(){
  char codigo[5]; 
  int resposta;
  printf("Para prosseguir e necess�rio informar o\nc�digo de reserva: #");
  scanf("%s",&codigo);


  if (strcmp(codigo, "UKIV") == 0){
    printf("\nO codigo � #UKIV \n");
    passagem = 950.75 * 2;
    printf("O valor atual � %.2f\n",passagem);
    classe();
    pagamento();
  }
  else if (strcmp(codigo, "UKI") == 0){
    printf("\nO codigo � #UKI \n");
    passagem = 950.75 * 1.7;
    printf("O valor atual � %.2f\n",passagem);
    classe();
    pagamento();
  }
  else if (strcmp(codigo, "UKV") == 0){
    printf("\nO codigo � #UKV \n");
    passagem = 950.75 * 1.5;
    printf("O valor atual � %.2f\n",passagem);
    classe();
    pagamento();
  }
  else if (strcmp(codigo, "SPIV") == 0){
    printf("\nO codigo � #SPIV \n");
    passagem = 735.55 * 2;
    printf("O valor atual � %.2f\n",passagem);
    classe();
    pagamento();
  }
  else if (strcmp(codigo, "SPI") == 0){
    printf("\nO codigo � #SPI \n");
    passagem = 735.55 * 1.7;
    printf("O valor atual � %.2f\n",passagem);
    classe();
    pagamento();
  }
  else if (strcmp(codigo, "SPV") == 0){
      printf("\nO codigo � #SPV \n");
      passagem = 735.55 * 1.5;
      printf("O valor atual � %.2f\n",passagem);
      classe();
    pagamento();
  }
    else if (strcmp(codigo, "POIV") == 0){
      printf("\nO codigo � #POIV \n");
      passagem = 735.55 * 1.5;
      printf("O valor atual � %.2f\n",passagem);
      classe();
    pagamento();
  }
    else if (strcmp(codigo, "POI") == 0){
      printf("\nO codigo � #POI \n");
      passagem = 020.52 * 1.7;
      printf("O valor atual � %.2f\n",passagem);
      classe();
    pagamento();
  }
    else if (strcmp(codigo, "POV") == 0){
      printf("\nO codigo � #POV \n");
      passagem = 020.52 * 1.5;
      printf("O valor atual � %.2f\n",passagem);
      classe();
    pagamento();
  }else{
    printf("\nO c�digo reserva: %s � inv�lido\nTente digitar novamente\nVoc� poder� obter seu codigo de reserva na op��o 1 - cadastros\nOBS: O Codigo deve ser digitado em letras mai�scula\n\n",codigo);
    Sleep(500);
    printf("[1] - Insirir novamente\n");
    printf("[2] - Voltar ao menu\n");
    printf("> ");
    scanf("%d",&resposta);
    if (resposta == 1){
      system("cls");
      codReserva();
    }else{
      system("cls");
      menu();
    }
  }
}

int infoCartao(){
    system("cls");
    printf("\nInsira os Dados");
    printf("\nDigite o numero do cart�o: ");
    scanf("%d",&numeroCartao);

    printf("\nDigite o CVV: ");
    scanf("%d",&CVV);

     if (CVV == 0) somaDigito = 1;
     else
         while (CVV != 0)
           {
               somaDigito = somaDigito + 1;
               CVV = CVV / 10;
           }
       return 0;
}

int historico(){
  printf("Seu Historico de compras\n");
  printf("\nPedidos concluidos: %d\n",indice);

  if (situacao == 1){
    printf("\nAguardando pagamento da passagem: ");
      if (cod == 1){
        printf("#UKIV\n");
      } 
      else if (cod == 2){
        printf("#UKI\n");
      }
      else if (cod == 3){
        printf("#UKV\n");
      }
      else if (cod == 4){
        printf("#SPIV\n");
      }
      else if (cod == 5){
        printf("#SPI\n");
      }
      else if (cod == 6){
        printf("#SPV\n");
      }
      else if (cod == 7){
        printf("#POIV\n");
      }
      else if (cod == 8){
        printf("#POI\n");
      }
      else if (cod == 9){
        printf("#POV\n");
      }

      if (pais == 1 || pais == 2 || pais == 3){
        printf("Deseja cancela o pedido?\n");
        printf("[0] - Para cancelar");
      }

   }
   else if(situacao == 2){
    printf("\nDetalhes do ultimo pedido\n");
    printf("Status: Pedido Concluido\n");
    printf("N� cart�o: %d\n",numeroCartao);
    printf("Forma de pagamento: Debito\n");
   }
   else if(situacao == 3){
    printf("\nDetalhes do ultimo pedido\n");
    printf("Status: Pedido Concluido\n");
    printf("N� cart�o: %d\n",numeroCartao);
    printf("Forma de pagamento: Credito � vista\n");
   }
   else if(situacao == 4){
    printf("\nDetalhes do ultimo pedido\n");
    printf("Status: Pedido Concluido\n");
    printf("N� cart�o: %d\n",numeroCartao);
    printf("Forma de pagamento: Parcelado em %.0f\n",parcela);
   }
   else if(situacao == 5){
    printf("\nDetalhes do ultimo pedido\n");
    printf("Status: Pedido Concluido\n");
    printf("Forma de pagamento: Boleto\n");
   }   
   else if(situacao == 6){
    printf("\nDetalhes do ultimo pedido\n");
    printf("Status: Pedido Concluido\n");
    printf("Forma de pagamento: Transfer�ncia Eletr�nica\n");
   }
   else if (indice == 0){
    printf("\nVAZIO\n\nPara criar uma passagem v� at� [1 - Cadastro]:");
   }

  printf("\n\n[1] - Voltar ao menu\n");
  printf("[2] - Fechar o sistema\n");
  printf("> ");
  scanf("%d",&resposta);
  if(resposta == 0){
    pais = 0;
    sentido = 0;
    printf("Pedido cancelado!\n");
    system("pause");
    system("cls");
    menu();
  }
  else if (resposta == 2){
    exit(0);
  }
  else{
    system("cls");
    menu();
  }
}