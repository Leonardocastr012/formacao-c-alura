//Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char letra;
    
    printf("Digite uma letra de A a Z(Maiscula): ");
    scanf("%c", &letra);

    letra = letra + 32;// Distância da maíuscula para minúscula(35 unidades)
    printf("%c", letra);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}