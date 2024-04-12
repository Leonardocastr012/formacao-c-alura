//Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float n;

    printf("Número: ");
    scanf("%f", &n);

    printf("Número lido: %d", n);


    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}