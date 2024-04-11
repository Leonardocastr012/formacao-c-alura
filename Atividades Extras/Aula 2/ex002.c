#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int number;

    printf("Escreva um número inteiro: ");
    scanf("%d", &number);

    printf("O número inteiro é %d", number);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}