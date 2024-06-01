#include <stdio.h>
#include <windows.h>

int main() {
    //Como colocar acentuação no windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, numero, i*numero);
    }
    
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}