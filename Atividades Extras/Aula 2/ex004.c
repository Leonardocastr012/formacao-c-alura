//Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n;

    printf("Número: ");
    scanf("%d", &n);

    printf("Número lido: %f", n);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}