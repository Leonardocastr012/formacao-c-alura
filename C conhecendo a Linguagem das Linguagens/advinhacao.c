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
    int menor = (chute > numeroSecreto);
    int maior = (chute < numeroSecreto);
    
    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
        
        printf("Tetantiva %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou =(chute == numeroSecreto);
        if(acertou){
            printf("Parabêns! Você acertou!\n");
            printf("Você é bom nisso! Jogue outra vez! \n");
            break; //Quebra o loop
        }
        else if(menor){
            printf("O número secreto é menor do que o que você chutou!\n");
        }
        else if(maior){
            printf("O número secreto é maior do que o que você chutou!\n");
        }
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}