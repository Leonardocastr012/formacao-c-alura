//Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char a;
    printf("Digite um caractere: ");
    scanf("%c", &a);
    printf("Valor inteiro: %d", a);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}