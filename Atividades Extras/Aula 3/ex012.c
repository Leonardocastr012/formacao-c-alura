//Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V= pi * raio^2* altura em que π = 3.141592
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float h, r, v;
    const float PI = 3.141592;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);
    fflush(stdin);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);

    v = PI * pow(r,2) * h;

    printf("O volume do cilindro fica %.2f", v);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}