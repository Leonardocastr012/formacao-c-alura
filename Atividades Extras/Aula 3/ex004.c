#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float num1, num2, num3, num4, media;

    printf("Escreva um número: ");
    scanf("%f", &num1);
    printf("Escreva um número novamente: ");
    scanf("%f", &num2);
    printf("Escreva um número novamente: ");
    scanf("%f", &num3);
    printf("Escreva um número novamente: ");
    scanf("%f", &num4);
    
    media = (num1 + num2 + num3 + num4) / 4;

    printf("A média dos números é %.3f!", media);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}