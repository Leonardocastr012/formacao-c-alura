//Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double x;
    printf("Digite um numero: ");
    scanf("%lf", &x);
    printf("O valor em notacao cientifica: %e", x);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}