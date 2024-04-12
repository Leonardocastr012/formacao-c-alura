//Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n1;
    int n2;
    
    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Segundo número: ");
    scanf("%d", &n2);
    printf("%d e %d", n2, n1);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}