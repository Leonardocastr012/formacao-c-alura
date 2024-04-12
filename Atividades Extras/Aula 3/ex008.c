//Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float F, C;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = C * (9.0/5.0) + 32.0;//fórmula de conversão de temperatura

    printf("A temperatura %.1f C fica %.1f F.", C, F);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}