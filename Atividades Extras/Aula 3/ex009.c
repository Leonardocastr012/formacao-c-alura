//Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    const float PI = 3.141592;
    float R, G;

    printf("Digite um ângulo: ");
    scanf("%f", &G);

    R = G * PI / 180;

    printf("%.0f graus em radianos fica %.2f", G, R);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}