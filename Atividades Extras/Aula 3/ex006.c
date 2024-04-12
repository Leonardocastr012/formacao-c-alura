//Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double valor;

    printf("Escreva um valor: ");
    scanf("%lf", &valor);

    printf("%e", valor);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}