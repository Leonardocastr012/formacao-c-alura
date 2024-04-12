//Faça um programa que leia um número real e imprima a quinta parte desse número.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float numero, quinta;

    printf("Escreva um número inteiro: ");
    scanf("%f", &numero);
    
    quinta = numero/5;

    printf("A quinta parte de %.2f é %.2f!", numero, quinta);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}