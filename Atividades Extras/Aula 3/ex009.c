//Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float valor1, valor2;

    printf("Escreva dois números interios separados por espaço: ");
    scanf("%f %f", &valor1, &valor2);

    printf("%f e %f", valor2, valor1);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}