#include <stdio.h>
#include <windows.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {
    //Como colocar acentuação no windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhação *\n");
    printf("*****************************************\n");

    int numeroSecreto = 42;
    int chute;
    
    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
        
        printf("Tetantiva %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute > 0){
            printf("Você não pode chutar números negativos!\n");
            i--; //Vai diminuir essa tentativa, pois as tenativas válidas são apenas as com números positivos

            continue; //Faz o código parar nessa parte e ir direto para o próximo loop
        }

        int acertou =(chute == numeroSecreto);
        int maior = (chute > numeroSecreto);
        int menor = (chute < numeroSecreto);

        if(acertou){
            printf("Parabêns! Você acertou!\n");
            printf("Você é bom nisso! Jogue outra vez! \n");
            break; //Quebra o loop
        }
        else if(maior){
            printf("O seu chute foi maior que o número secreto!\n");
        }
        else if(menor){
            printf("O seu chute foi menor que o número secreto!\n");
        }
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}