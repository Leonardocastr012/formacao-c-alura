//Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área do círculo é A = π* raio2, sendo π = 3.141592.
#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    float raio, area;
    const float PI = 3.141592;

    printf("Qual o raio do círculo? ");
    scanf("%f", &raio);

    area = PI*(raio*raio);

    printf("A área é %.2f", area);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}