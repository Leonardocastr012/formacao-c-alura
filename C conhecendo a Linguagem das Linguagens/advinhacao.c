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

        int acertou =(chute == numeroSecreto);
        if(acertou){
            printf("Parabêns! Você acertou!\n");
            printf("Jogue novamente!\n");
            break; //Quebra o loop
        }
        else{
            int chuteMaior = (chute > numeroSecreto);
            if(chuteMaior){
                printf("O número secreto é menor do que o que você chutou!\n");
            }
            int chuteMenor = (chute < numeroSecreto);
            if(chuteMenor){
                printf("O número secreto é maior do que o que você chutou!\n");
            }
        }
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}