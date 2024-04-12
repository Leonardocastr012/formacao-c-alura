//Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    printf("\"%c\"", letra);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}