//Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int num1, num2;

    printf("Escreva um número inteiro: ");
    scanf("%d", &num1);
    printf("Escreva um número inteiro novamente: ");
    scanf("%d", &num2);

    printf("%d e %d", num2, num1);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}