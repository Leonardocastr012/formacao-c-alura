#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero, antecessor, sucessor;

    printf("Escreva um número inteiro: ");
    scanf("%d", &numero);
    
    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("O antecessor é %d e o sucessor é %d!", antecessor, sucessor);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}