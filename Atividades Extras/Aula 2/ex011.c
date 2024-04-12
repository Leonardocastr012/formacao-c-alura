//Elabore um programa que contenha uma constante qualquer do tipo float. Use o comando #define. Imprima essa constante.
#include <stdio.h>
#include <windows.h>

#define numero_pi 3.14
int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("%f", numero_pi);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}