//Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char letra;

    printf("Escreva uma letra: ");
    scanf("%c", &letra);

    printf("%d", letra);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}