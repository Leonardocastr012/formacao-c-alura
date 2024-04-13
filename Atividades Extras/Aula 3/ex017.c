//Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.

#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Complemento bit a bit: %d", ~numero);
    
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}