#include <stdio.h>
#include <windows.h>

int main() {
    //Como colocar acentuação no windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhação *\n");
    printf("*****************************************\n");

    int numerosecreto = 42;
    int chute; //Quando a variável ainda não foi inicializada e você tenta saber seu valor, vai ter lixo de memória dentro dela. C deixa usa a variável não incializada então atenção
    int tentativas = 1;

    double pontos = 1000;
    
    while(1){
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0){
            printf("Você não pode chutar números negativos!\n");
            continue; //Faz o código parar nessa parte e ir direto para o próximo loop
        }

        int acertou =(chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou){
            printf("Parabêns! Você acertou!\n");
            printf("Você é bom nisso! Jogue outra vez! \n");
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
    printf("Você acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.2f\n", pontos);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}