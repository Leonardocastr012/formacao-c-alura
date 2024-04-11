#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int num1, num2, num3, soma;

    printf("Escreva um número inteiro: ");
    scanf("%d", &num1);
    printf("Escreva um número inteiro novamente: ");
    scanf("%d", &num2);
    printf("Escreva um número inteiro novamente: ");
    scanf("%d", &num3);
    
    soma = num1 + num2 + num3;

    printf("A soma dos números é %d!", soma);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}