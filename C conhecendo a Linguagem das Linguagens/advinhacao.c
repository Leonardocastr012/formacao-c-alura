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

    int numeroSecreto = 42;
    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if(chute == numeroSecreto){
        printf("Parabêns! Você acertou!\n");
        printf("Jogue novamente!\n");

    }
    else{
        if(chute > numeroSecreto){
            printf("O número secreto é menor do que o que você chutou!\n");
        }
        if(chute < numeroSecreto){
            printf("O número secreto é maior do que o que você chutou!\n");
        }
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}