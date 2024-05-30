#include <stdio.h>
#include <windows.h>

int main() {
    //Como colocar acentuação no windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int a = 3;
    int b = 2;
    double pontos = (double)a / (double)b; //casting
    printf("%f\n", pontos);

    double pi  = 3.1415;
    int piconvertido = (int)pi;

    printf("%f %d\n", pi, piconvertido);
    
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}