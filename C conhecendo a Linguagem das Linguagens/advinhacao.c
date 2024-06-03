#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Como colocar acentuação no windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos); //semente para o rand
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int chute; //Quando a variável ainda não foi inicializada e você tenta saber seu valor, vai ter lixo de memória dentro dela. C deixa usa a variável não incializada então atenção
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;

    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Díficil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;
    switch(1){
        case 1:
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 15;
            break;
        default:
            numerodetentativas = 6;
            break;
    }

    
    for(int i = 1; i <= numerodetentativas; i++){
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0){
            printf("Você não pode chutar números negativos!\n");
            continue; //Faz o código parar nessa parte e ir direto para o próximo loop
        }

        acertou =(chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou){
            break;
        }
        else if(maior){
            printf("O seu chute foi maior que o número secreto!\n");
        }
        else{
            printf("O seu chute foi menor que o número secreto!\n");
        }
        tentativas ++;

        double pontosperdidos = abs((double)(chute - numerosecreto)) / (double)2;//usando o casting
        
        pontos = pontos - pontosperdidos;
    }

    printf("FIM DE JOGO!\n");
    if(acertou){
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("Você ganhou!\n");
        printf("Você é bom nisso! Jogue outra vez! \n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.2f\n", pontos);
    }
    else{
        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");
        printf("Você perdeu! Tente novamente!\n");
        printf("Total de pontos: %.2f\n", pontos);
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}